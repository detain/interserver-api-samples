@isTest
private class OASHomeServicesTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeServices homeServices1 = OASHomeServices.getExample();
        OASHomeServices homeServices2 = homeServices1;
        OASHomeServices homeServices3 = new OASHomeServices();
        OASHomeServices homeServices4 = homeServices3;

        System.assert(homeServices1.equals(homeServices2));
        System.assert(homeServices2.equals(homeServices1));
        System.assert(homeServices1.equals(homeServices1));
        System.assert(homeServices3.equals(homeServices4));
        System.assert(homeServices4.equals(homeServices3));
        System.assert(homeServices3.equals(homeServices3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeServices homeServices1 = OASHomeServices.getExample();
        OASHomeServices homeServices2 = OASHomeServices.getExample();
        OASHomeServices homeServices3 = new OASHomeServices();
        OASHomeServices homeServices4 = new OASHomeServices();

        System.assert(homeServices1.equals(homeServices2));
        System.assert(homeServices2.equals(homeServices1));
        System.assert(homeServices3.equals(homeServices4));
        System.assert(homeServices4.equals(homeServices3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeServices homeServices1 = OASHomeServices.getExample();
        OASHomeServices homeServices2 = new OASHomeServices();

        System.assertEquals(false, homeServices1.equals('foo'));
        System.assertEquals(false, homeServices2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeServices homeServices1 = OASHomeServices.getExample();
        OASHomeServices homeServices2 = new OASHomeServices();
        OASHomeServices homeServices3;

        System.assertEquals(false, homeServices1.equals(homeServices3));
        System.assertEquals(false, homeServices2.equals(homeServices3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeServices homeServices1 = OASHomeServices.getExample();
        OASHomeServices homeServices2 = new OASHomeServices();

        System.assertEquals(homeServices1.hashCode(), homeServices1.hashCode());
        System.assertEquals(homeServices2.hashCode(), homeServices2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeServices homeServices1 = OASHomeServices.getExample();
        OASHomeServices homeServices2 = OASHomeServices.getExample();
        OASHomeServices homeServices3 = new OASHomeServices();
        OASHomeServices homeServices4 = new OASHomeServices();

        System.assert(homeServices1.equals(homeServices2));
        System.assert(homeServices3.equals(homeServices4));
        System.assertEquals(homeServices1.hashCode(), homeServices2.hashCode());
        System.assertEquals(homeServices3.hashCode(), homeServices4.hashCode());
    }
}
