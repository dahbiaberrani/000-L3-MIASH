void sort( int[] a ) {
    if( a == null || a.length < 2 ) // array is trivially sorted
    return;
int i;
for( i = 0; i < a.length – 1; i++ ){
    if( a[ i ] < a[ i + 1 ] )
        break;
    }
if( i >= a.length – 1 ) // array is already sorted
    return;
qsort(a, 0, a.length );
}