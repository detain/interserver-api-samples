@isTest
private class OASHomeServicesVpsTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeServicesVps homeServicesVps1 = OASHomeServicesVps.getExample();
        OASHomeServicesVps homeServicesVps2 = homeServicesVps1;
        OASHomeServicesVps homeServicesVps3 = new OASHomeServicesVps();
        OASHomeServicesVps homeServicesVps4 = homeServicesVps3;

        System.assert(homeServicesVps1.equals(homeServicesVps2));
        System.assert(homeServicesVps2.equals(homeServicesVps1));
        System.assert(homeServicesVps1.equals(homeServicesVps1));
        System.assert(homeServicesVps3.equals(homeServicesVps4));
        System.assert(homeServicesVps4.equals(homeServicesVps3));
        System.assert(homeServicesVps3.equals(homeServicesVps3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeServicesVps homeServicesVps1 = OASHomeServicesVps.getExample();
        OASHomeServicesVps homeServicesVps2 = OASHomeServicesVps.getExample();
        OASHomeServicesVps homeServicesVps3 = new OASHomeServicesVps();
        OASHomeServicesVps homeServicesVps4 = new OASHomeServicesVps();

        System.assert(homeServicesVps1.equals(homeServicesVps2));
        System.assert(homeServicesVps2.equals(homeServicesVps1));
        System.assert(homeServicesVps3.equals(homeServicesVps4));
        System.assert(homeServicesVps4.equals(homeServicesVps3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeServicesVps homeServicesVps1 = OASHomeServicesVps.getExample();
        OASHomeServicesVps homeServicesVps2 = new OASHomeServicesVps();

        System.assertEquals(false, homeServicesVps1.equals('foo'));
        System.assertEquals(false, homeServicesVps2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeServicesVps homeServicesVps1 = OASHomeServicesVps.getExample();
        OASHomeServicesVps homeServicesVps2 = new OASHomeServicesVps();
        OASHomeServicesVps homeServicesVps3;

        System.assertEquals(false, homeServicesVps1.equals(homeServicesVps3));
        System.assertEquals(false, homeServicesVps2.equals(homeServicesVps3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeServicesVps homeServicesVps1 = OASHomeServicesVps.getExample();
        OASHomeServicesVps homeServicesVps2 = new OASHomeServicesVps();

        System.assertEquals(homeServicesVps1.hashCode(), homeServicesVps1.hashCode());
        System.assertEquals(homeServicesVps2.hashCode(), homeServicesVps2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeServicesVps homeServicesVps1 = OASHomeServicesVps.getExample();
        OASHomeServicesVps homeServicesVps2 = OASHomeServicesVps.getExample();
        OASHomeServicesVps homeServicesVps3 = new OASHomeServicesVps();
        OASHomeServicesVps homeServicesVps4 = new OASHomeServicesVps();

        System.assert(homeServicesVps1.equals(homeServicesVps2));
        System.assert(homeServicesVps3.equals(homeServicesVps4));
        System.assertEquals(homeServicesVps1.hashCode(), homeServicesVps2.hashCode());
        System.assertEquals(homeServicesVps3.hashCode(), homeServicesVps4.hashCode());
    }
}
