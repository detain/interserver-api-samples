@isTest
private class OASServerOrderMemoryLi254Test {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderMemoryLi254 serverOrderMemoryLi2541 = OASServerOrderMemoryLi254.getExample();
        OASServerOrderMemoryLi254 serverOrderMemoryLi2542 = serverOrderMemoryLi2541;
        OASServerOrderMemoryLi254 serverOrderMemoryLi2543 = new OASServerOrderMemoryLi254();
        OASServerOrderMemoryLi254 serverOrderMemoryLi2544 = serverOrderMemoryLi2543;

        System.assert(serverOrderMemoryLi2541.equals(serverOrderMemoryLi2542));
        System.assert(serverOrderMemoryLi2542.equals(serverOrderMemoryLi2541));
        System.assert(serverOrderMemoryLi2541.equals(serverOrderMemoryLi2541));
        System.assert(serverOrderMemoryLi2543.equals(serverOrderMemoryLi2544));
        System.assert(serverOrderMemoryLi2544.equals(serverOrderMemoryLi2543));
        System.assert(serverOrderMemoryLi2543.equals(serverOrderMemoryLi2543));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderMemoryLi254 serverOrderMemoryLi2541 = OASServerOrderMemoryLi254.getExample();
        OASServerOrderMemoryLi254 serverOrderMemoryLi2542 = OASServerOrderMemoryLi254.getExample();
        OASServerOrderMemoryLi254 serverOrderMemoryLi2543 = new OASServerOrderMemoryLi254();
        OASServerOrderMemoryLi254 serverOrderMemoryLi2544 = new OASServerOrderMemoryLi254();

        System.assert(serverOrderMemoryLi2541.equals(serverOrderMemoryLi2542));
        System.assert(serverOrderMemoryLi2542.equals(serverOrderMemoryLi2541));
        System.assert(serverOrderMemoryLi2543.equals(serverOrderMemoryLi2544));
        System.assert(serverOrderMemoryLi2544.equals(serverOrderMemoryLi2543));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderMemoryLi254 serverOrderMemoryLi2541 = OASServerOrderMemoryLi254.getExample();
        OASServerOrderMemoryLi254 serverOrderMemoryLi2542 = new OASServerOrderMemoryLi254();

        System.assertEquals(false, serverOrderMemoryLi2541.equals('foo'));
        System.assertEquals(false, serverOrderMemoryLi2542.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderMemoryLi254 serverOrderMemoryLi2541 = OASServerOrderMemoryLi254.getExample();
        OASServerOrderMemoryLi254 serverOrderMemoryLi2542 = new OASServerOrderMemoryLi254();
        OASServerOrderMemoryLi254 serverOrderMemoryLi2543;

        System.assertEquals(false, serverOrderMemoryLi2541.equals(serverOrderMemoryLi2543));
        System.assertEquals(false, serverOrderMemoryLi2542.equals(serverOrderMemoryLi2543));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderMemoryLi254 serverOrderMemoryLi2541 = OASServerOrderMemoryLi254.getExample();
        OASServerOrderMemoryLi254 serverOrderMemoryLi2542 = new OASServerOrderMemoryLi254();

        System.assertEquals(serverOrderMemoryLi2541.hashCode(), serverOrderMemoryLi2541.hashCode());
        System.assertEquals(serverOrderMemoryLi2542.hashCode(), serverOrderMemoryLi2542.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderMemoryLi254 serverOrderMemoryLi2541 = OASServerOrderMemoryLi254.getExample();
        OASServerOrderMemoryLi254 serverOrderMemoryLi2542 = OASServerOrderMemoryLi254.getExample();
        OASServerOrderMemoryLi254 serverOrderMemoryLi2543 = new OASServerOrderMemoryLi254();
        OASServerOrderMemoryLi254 serverOrderMemoryLi2544 = new OASServerOrderMemoryLi254();

        System.assert(serverOrderMemoryLi2541.equals(serverOrderMemoryLi2542));
        System.assert(serverOrderMemoryLi2543.equals(serverOrderMemoryLi2544));
        System.assertEquals(serverOrderMemoryLi2541.hashCode(), serverOrderMemoryLi2542.hashCode());
        System.assertEquals(serverOrderMemoryLi2543.hashCode(), serverOrderMemoryLi2544.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerOrderMemoryLi254 serverOrderMemoryLi254 = new OASServerOrderMemoryLi254();
        Map<String, String> x-property-mappings = serverOrderMemoryLi254.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('65'));
    }
}
