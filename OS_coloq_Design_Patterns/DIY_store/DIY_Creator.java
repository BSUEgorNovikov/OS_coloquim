package DIY_store;

import AbsFactory.Creator;

public class DIY_Creator implements Creator {
    @Override
    public String produceItem() {
        return "Axe";
    }
}
