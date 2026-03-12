@isTest
private class OASServerClientLinkTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerClientLink serverClientLink1 = OASServerClientLink.getExample();
        OASServerClientLink serverClientLink2 = serverClientLink1;
        OASServerClientLink serverClientLink3 = new OASServerClientLink();
        OASServerClientLink serverClientLink4 = serverClientLink3;

        System.assert(serverClientLink1.equals(serverClientLink2));
        System.assert(serverClientLink2.equals(serverClientLink1));
        System.assert(serverClientLink1.equals(serverClientLink1));
        System.assert(serverClientLink3.equals(serverClientLink4));
        System.assert(serverClientLink4.equals(serverClientLink3));
        System.assert(serverClientLink3.equals(serverClientLink3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerClientLink serverClientLink1 = OASServerClientLink.getExample();
        OASServerClientLink serverClientLink2 = OASServerClientLink.getExample();
        OASServerClientLink serverClientLink3 = new OASServerClientLink();
        OASServerClientLink serverClientLink4 = new OASServerClientLink();

        System.assert(serverClientLink1.equals(serverClientLink2));
        System.assert(serverClientLink2.equals(serverClientLink1));
        System.assert(serverClientLink3.equals(serverClientLink4));
        System.assert(serverClientLink4.equals(serverClientLink3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerClientLink serverClientLink1 = OASServerClientLink.getExample();
        OASServerClientLink serverClientLink2 = new OASServerClientLink();

        System.assertEquals(false, serverClientLink1.equals('foo'));
        System.assertEquals(false, serverClientLink2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerClientLink serverClientLink1 = OASServerClientLink.getExample();
        OASServerClientLink serverClientLink2 = new OASServerClientLink();
        OASServerClientLink serverClientLink3;

        System.assertEquals(false, serverClientLink1.equals(serverClientLink3));
        System.assertEquals(false, serverClientLink2.equals(serverClientLink3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerClientLink serverClientLink1 = OASServerClientLink.getExample();
        OASServerClientLink serverClientLink2 = new OASServerClientLink();

        System.assertEquals(serverClientLink1.hashCode(), serverClientLink1.hashCode());
        System.assertEquals(serverClientLink2.hashCode(), serverClientLink2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerClientLink serverClientLink1 = OASServerClientLink.getExample();
        OASServerClientLink serverClientLink2 = OASServerClientLink.getExample();
        OASServerClientLink serverClientLink3 = new OASServerClientLink();
        OASServerClientLink serverClientLink4 = new OASServerClientLink();

        System.assert(serverClientLink1.equals(serverClientLink2));
        System.assert(serverClientLink3.equals(serverClientLink4));
        System.assertEquals(serverClientLink1.hashCode(), serverClientLink2.hashCode());
        System.assertEquals(serverClientLink3.hashCode(), serverClientLink4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerClientLink serverClientLink = new OASServerClientLink();
        Map<String, String> x-property-mappings = serverClientLink.getx-property-mappings();
        System.assertEquals('iconText', x-property-mappings.get('icon_text'));
        System.assertEquals('helpText', x-property-mappings.get('help_text'));
    }
}
