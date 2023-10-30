package DIY_store;

import AbsFactory.Seller;

public class DIY_Seller implements Seller {
    @Override
    public int sell() {
        return 25;
    }
}
