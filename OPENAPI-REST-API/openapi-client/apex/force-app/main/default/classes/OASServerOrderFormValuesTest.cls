@isTest
private class OASServerOrderFormValuesTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderFormValues serverOrderFormValues1 = OASServerOrderFormValues.getExample();
        OASServerOrderFormValues serverOrderFormValues2 = serverOrderFormValues1;
        OASServerOrderFormValues serverOrderFormValues3 = new OASServerOrderFormValues();
        OASServerOrderFormValues serverOrderFormValues4 = serverOrderFormValues3;

        System.assert(serverOrderFormValues1.equals(serverOrderFormValues2));
        System.assert(serverOrderFormValues2.equals(serverOrderFormValues1));
        System.assert(serverOrderFormValues1.equals(serverOrderFormValues1));
        System.assert(serverOrderFormValues3.equals(serverOrderFormValues4));
        System.assert(serverOrderFormValues4.equals(serverOrderFormValues3));
        System.assert(serverOrderFormValues3.equals(serverOrderFormValues3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderFormValues serverOrderFormValues1 = OASServerOrderFormValues.getExample();
        OASServerOrderFormValues serverOrderFormValues2 = OASServerOrderFormValues.getExample();
        OASServerOrderFormValues serverOrderFormValues3 = new OASServerOrderFormValues();
        OASServerOrderFormValues serverOrderFormValues4 = new OASServerOrderFormValues();

        System.assert(serverOrderFormValues1.equals(serverOrderFormValues2));
        System.assert(serverOrderFormValues2.equals(serverOrderFormValues1));
        System.assert(serverOrderFormValues3.equals(serverOrderFormValues4));
        System.assert(serverOrderFormValues4.equals(serverOrderFormValues3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderFormValues serverOrderFormValues1 = OASServerOrderFormValues.getExample();
        OASServerOrderFormValues serverOrderFormValues2 = new OASServerOrderFormValues();

        System.assertEquals(false, serverOrderFormValues1.equals('foo'));
        System.assertEquals(false, serverOrderFormValues2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderFormValues serverOrderFormValues1 = OASServerOrderFormValues.getExample();
        OASServerOrderFormValues serverOrderFormValues2 = new OASServerOrderFormValues();
        OASServerOrderFormValues serverOrderFormValues3;

        System.assertEquals(false, serverOrderFormValues1.equals(serverOrderFormValues3));
        System.assertEquals(false, serverOrderFormValues2.equals(serverOrderFormValues3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderFormValues serverOrderFormValues1 = OASServerOrderFormValues.getExample();
        OASServerOrderFormValues serverOrderFormValues2 = new OASServerOrderFormValues();

        System.assertEquals(serverOrderFormValues1.hashCode(), serverOrderFormValues1.hashCode());
        System.assertEquals(serverOrderFormValues2.hashCode(), serverOrderFormValues2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderFormValues serverOrderFormValues1 = OASServerOrderFormValues.getExample();
        OASServerOrderFormValues serverOrderFormValues2 = OASServerOrderFormValues.getExample();
        OASServerOrderFormValues serverOrderFormValues3 = new OASServerOrderFormValues();
        OASServerOrderFormValues serverOrderFormValues4 = new OASServerOrderFormValues();

        System.assert(serverOrderFormValues1.equals(serverOrderFormValues2));
        System.assert(serverOrderFormValues3.equals(serverOrderFormValues4));
        System.assertEquals(serverOrderFormValues1.hashCode(), serverOrderFormValues2.hashCode());
        System.assertEquals(serverOrderFormValues3.hashCode(), serverOrderFormValues4.hashCode());
    }
}
