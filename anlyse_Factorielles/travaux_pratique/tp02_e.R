mnist_test <- read.csv("http://www.math.univ-toulouse.fr/~ferraty/DATA/mnist_test.csv")

nbpixels = ncol(mnist_test) - 1

# noms de variables attribués à chaque colonne de minst_test
dimnames(mnist_test)[[2]] = c("digit", paste0("pixel", 1:nbpixels))
# déclaration de "digit" comme variable catégorielle
mnist_test$digit = as.factor(mnist_test$digit)

DATA = as.matrix(mnist_test[, -1])
par(mar=c(0,0,0,0), mfrow = c(15,20))
for(number in 1:300){
  # chaque image est un vecteur de taille 784 = 28 * 28
  # "img" = version matricielle 28 lignes et 28 colonnes
  # (image 28 pixels par 28 pixels
  img = matrix(DATA[number, ], 28, 28, byrow=F)
  # la fonction "image" affiche l'image du chiffre écrit à la main
  image(255 - img[, nrow(img):1], axes=FALSE,
        col = gray.colors(255))
}

library(FactoMineR)
res.PCA <- PCA(mnist_test,quali.sup=1,graph=FALSE)

# Sélection aléatoire d'un sous-échantillon "echan"
# La commande "set.seed(1)" permet de reproduire le même
# sous-échantillon chaque fois que l'on exécute le code
set.seed(1)
echan = sample(1:10000, 1000)
df = data.frame(pc1 = res.PCA$ind$coord[echan, 1],pc2 = res.PCA$ind$coord[echan, 2],pc3 = res.PCA$ind$coord[echan, 3],label = mnist_test$digit[echan],id = echan)
Colors <- c("black","blue","red","green","purple","pink","orange","brown","cyan","gray50")
install.packages("plotly")
library(plotly)
fig <- plot_ly()
fig <- fig %>% 
  add_trace(type='scatter3d', mode = 'markers',x = df$pc1, y = df$pc2, z = df$pc3, text = df$id,color = df$label, colors = Colors,hoverinfo = 'text',showlegend = TRUE)
fig


#Affiche le nuage des individus


plot(res.pca, choix = "ind", cex = 1, autoLab = "yes")
