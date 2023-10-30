package Pharmacy;

import AbsFactory.Seller;

public class Pharm_Seller implements Seller {
    @Override
    public int sell() {
        return 10;
    }
}
