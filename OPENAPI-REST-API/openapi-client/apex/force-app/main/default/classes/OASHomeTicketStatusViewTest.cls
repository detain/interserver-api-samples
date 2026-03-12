@isTest
private class OASHomeTicketStatusViewTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeTicketStatusView homeTicketStatusView1 = OASHomeTicketStatusView.getExample();
        OASHomeTicketStatusView homeTicketStatusView2 = homeTicketStatusView1;
        OASHomeTicketStatusView homeTicketStatusView3 = new OASHomeTicketStatusView();
        OASHomeTicketStatusView homeTicketStatusView4 = homeTicketStatusView3;

        System.assert(homeTicketStatusView1.equals(homeTicketStatusView2));
        System.assert(homeTicketStatusView2.equals(homeTicketStatusView1));
        System.assert(homeTicketStatusView1.equals(homeTicketStatusView1));
        System.assert(homeTicketStatusView3.equals(homeTicketStatusView4));
        System.assert(homeTicketStatusView4.equals(homeTicketStatusView3));
        System.assert(homeTicketStatusView3.equals(homeTicketStatusView3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeTicketStatusView homeTicketStatusView1 = OASHomeTicketStatusView.getExample();
        OASHomeTicketStatusView homeTicketStatusView2 = OASHomeTicketStatusView.getExample();
        OASHomeTicketStatusView homeTicketStatusView3 = new OASHomeTicketStatusView();
        OASHomeTicketStatusView homeTicketStatusView4 = new OASHomeTicketStatusView();

        System.assert(homeTicketStatusView1.equals(homeTicketStatusView2));
        System.assert(homeTicketStatusView2.equals(homeTicketStatusView1));
        System.assert(homeTicketStatusView3.equals(homeTicketStatusView4));
        System.assert(homeTicketStatusView4.equals(homeTicketStatusView3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeTicketStatusView homeTicketStatusView1 = OASHomeTicketStatusView.getExample();
        OASHomeTicketStatusView homeTicketStatusView2 = new OASHomeTicketStatusView();

        System.assertEquals(false, homeTicketStatusView1.equals('foo'));
        System.assertEquals(false, homeTicketStatusView2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeTicketStatusView homeTicketStatusView1 = OASHomeTicketStatusView.getExample();
        OASHomeTicketStatusView homeTicketStatusView2 = new OASHomeTicketStatusView();
        OASHomeTicketStatusView homeTicketStatusView3;

        System.assertEquals(false, homeTicketStatusView1.equals(homeTicketStatusView3));
        System.assertEquals(false, homeTicketStatusView2.equals(homeTicketStatusView3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeTicketStatusView homeTicketStatusView1 = OASHomeTicketStatusView.getExample();
        OASHomeTicketStatusView homeTicketStatusView2 = new OASHomeTicketStatusView();

        System.assertEquals(homeTicketStatusView1.hashCode(), homeTicketStatusView1.hashCode());
        System.assertEquals(homeTicketStatusView2.hashCode(), homeTicketStatusView2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeTicketStatusView homeTicketStatusView1 = OASHomeTicketStatusView.getExample();
        OASHomeTicketStatusView homeTicketStatusView2 = OASHomeTicketStatusView.getExample();
        OASHomeTicketStatusView homeTicketStatusView3 = new OASHomeTicketStatusView();
        OASHomeTicketStatusView homeTicketStatusView4 = new OASHomeTicketStatusView();

        System.assert(homeTicketStatusView1.equals(homeTicketStatusView2));
        System.assert(homeTicketStatusView3.equals(homeTicketStatusView4));
        System.assertEquals(homeTicketStatusView1.hashCode(), homeTicketStatusView2.hashCode());
        System.assertEquals(homeTicketStatusView3.hashCode(), homeTicketStatusView4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHomeTicketStatusView homeTicketStatusView = new OASHomeTicketStatusView();
        Map<String, String> x-property-mappings = homeTicketStatusView.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('4'));
        System.assertEquals('', x-property-mappings.get('5'));
        System.assertEquals('', x-property-mappings.get('6'));
    }
}
