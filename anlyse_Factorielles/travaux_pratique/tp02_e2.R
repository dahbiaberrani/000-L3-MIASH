nbcp = c(0, 3, 10, 50, 100, 200)
res.PCA = PCA(mnist_test, quali.sup = 1, graph = FALSE,
              ncp = max(nbcp), scale.unit = FALSE)
MNIST = as.matrix(mnist_test[, -1])
echan = c(1:5, 8, 9, 12, 19, 62)
nsample = length(echan)
par(mar=c(0,1,0,0), mfrow = c(nsample, length(nbcp)))
for(kk in nbcp){
  if(kk == 0){
    img = matrix(MNIST[echan[1], ], 28, 28, byrow=F)
    image(255 - img[, nrow(img):1], axes=FALSE,
          col = gray.colors(255), main = )
  }else{
    # "IMG_APPROX" contient les images (vectorisées) reconstruites
    # à partir des "kk" premiers axes factoriels
    IMG_APPROX = tcrossprod(res.PCA$ind$coord[, 1:kk],
                            res.PCA$svd$V[, 1:kk])
    img = matrix(IMG_APPROX[echan[1], ], 28, 28, byrow=F)
    image(255 - img[, nrow(img):1], axes=FALSE,
          col = gray.colors(255))
  }
}
for(number in echan[-1]){
  for(kk in nbcp){
    if(kk == 0){
      img = matrix(MNIST[number, ], 28, 28, byrow=F)
      image(255 - img[, nrow(img):1], axes=FALSE,
            col = gray.colors(255))
    }else{
      IMG_APPROX = tcrossprod(res.PCA$ind$coord[, 1:kk],res.PCA$svd$V[, 1:kk])
      img = matrix(IMG_APPROX[number, ], 28, 28, byrow=F)
      image(255 - img[, nrow(img):1], axes=FALSE,
            col = gray.colors(255))
    }
  }
}