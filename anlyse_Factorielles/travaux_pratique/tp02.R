---
title: "TEMP"
auteur: "BERRANI"
date: "29/09/2021"

output:
  pdf_document: default 
  word_document:default
  html_document:df_print:paged
    df_print: paged
---









TEMP = read.csv("http://www.math.univ-toulouse.fr/???ferraty/DATA/acp-temperatures-villes-francaises.txt",sep ="\t",dec=",",row.names=1)
library(FactoMineR)
summary(TEMP)
# réalisation de l'acp à l'aide de la fonction pca 

res.pca = PCA(TEMP, quanti.sup=13:16)

#Resume numérique ed l'ACP

summary(res.pca, nbind = Inf)

#Nuage des individus 
#Plot(res.pca, choix = "ind" , cex = 1 , autoLab = "yes")

#cercle des corrélation 
plot(res.pca, choix = "var" , , cex = 1.3)

#Eboulis des valeurs progress
#barplot(res.pcaSeig[,2], main = "pourcetage d'inertie", name.arg = 1:nrow(res.pcaSeig))
#3) ACP des donnees de températures avec Factoshiny

install.packages("Factoshiny")

library(Factoshiny)
PCAshiny(TEMP)