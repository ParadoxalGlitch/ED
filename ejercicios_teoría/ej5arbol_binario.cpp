

bool Pre_equal_In(ArbolBinario<int> & ab){

    ArbolBinario<int>::preorden_iterator it_pre;
    ArbolBinario<int>::Inorden_iterator it_in;

    for (it_pre = ab.begin_preorden(), it_in = ab.begin_inorden(); it_pre != ab.end(); ++it_pre,++it_in){

        if (*it_pre != *it_in)
            return false;
    }

    return true;
}



