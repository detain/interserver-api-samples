@isTest
private class OASVPSTrafficDataDataSectionResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner1 = OASVPSTrafficDataDataSectionResponse.getExample();
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner2 = vpSTrafficDataDataSectionResponseInner1;
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner3 = new OASVPSTrafficDataDataSectionResponse();
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner4 = vpSTrafficDataDataSectionResponseInner3;

        System.assert(vpSTrafficDataDataSectionResponseInner1.equals(vpSTrafficDataDataSectionResponseInner2));
        System.assert(vpSTrafficDataDataSectionResponseInner2.equals(vpSTrafficDataDataSectionResponseInner1));
        System.assert(vpSTrafficDataDataSectionResponseInner1.equals(vpSTrafficDataDataSectionResponseInner1));
        System.assert(vpSTrafficDataDataSectionResponseInner3.equals(vpSTrafficDataDataSectionResponseInner4));
        System.assert(vpSTrafficDataDataSectionResponseInner4.equals(vpSTrafficDataDataSectionResponseInner3));
        System.assert(vpSTrafficDataDataSectionResponseInner3.equals(vpSTrafficDataDataSectionResponseInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner1 = OASVPSTrafficDataDataSectionResponse.getExample();
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner2 = OASVPSTrafficDataDataSectionResponse.getExample();
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner3 = new OASVPSTrafficDataDataSectionResponse();
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner4 = new OASVPSTrafficDataDataSectionResponse();

        System.assert(vpSTrafficDataDataSectionResponseInner1.equals(vpSTrafficDataDataSectionResponseInner2));
        System.assert(vpSTrafficDataDataSectionResponseInner2.equals(vpSTrafficDataDataSectionResponseInner1));
        System.assert(vpSTrafficDataDataSectionResponseInner3.equals(vpSTrafficDataDataSectionResponseInner4));
        System.assert(vpSTrafficDataDataSectionResponseInner4.equals(vpSTrafficDataDataSectionResponseInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner1 = OASVPSTrafficDataDataSectionResponse.getExample();
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner2 = new OASVPSTrafficDataDataSectionResponse();

        System.assertEquals(false, vpSTrafficDataDataSectionResponseInner1.equals('foo'));
        System.assertEquals(false, vpSTrafficDataDataSectionResponseInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner1 = OASVPSTrafficDataDataSectionResponse.getExample();
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner2 = new OASVPSTrafficDataDataSectionResponse();
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner3;

        System.assertEquals(false, vpSTrafficDataDataSectionResponseInner1.equals(vpSTrafficDataDataSectionResponseInner3));
        System.assertEquals(false, vpSTrafficDataDataSectionResponseInner2.equals(vpSTrafficDataDataSectionResponseInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner1 = OASVPSTrafficDataDataSectionResponse.getExample();
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner2 = new OASVPSTrafficDataDataSectionResponse();

        System.assertEquals(vpSTrafficDataDataSectionResponseInner1.hashCode(), vpSTrafficDataDataSectionResponseInner1.hashCode());
        System.assertEquals(vpSTrafficDataDataSectionResponseInner2.hashCode(), vpSTrafficDataDataSectionResponseInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner1 = OASVPSTrafficDataDataSectionResponse.getExample();
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner2 = OASVPSTrafficDataDataSectionResponse.getExample();
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner3 = new OASVPSTrafficDataDataSectionResponse();
        OASVPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponseInner4 = new OASVPSTrafficDataDataSectionResponse();

        System.assert(vpSTrafficDataDataSectionResponseInner1.equals(vpSTrafficDataDataSectionResponseInner2));
        System.assert(vpSTrafficDataDataSectionResponseInner3.equals(vpSTrafficDataDataSectionResponseInner4));
        System.assertEquals(vpSTrafficDataDataSectionResponseInner1.hashCode(), vpSTrafficDataDataSectionResponseInner2.hashCode());
        System.assertEquals(vpSTrafficDataDataSectionResponseInner3.hashCode(), vpSTrafficDataDataSectionResponseInner4.hashCode());
    }
}
