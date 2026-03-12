@isTest
private class OASMailDeliverabilityResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailDeliverabilityResponse mailDeliverabilityResponse1 = OASMailDeliverabilityResponse.getExample();
        OASMailDeliverabilityResponse mailDeliverabilityResponse2 = mailDeliverabilityResponse1;
        OASMailDeliverabilityResponse mailDeliverabilityResponse3 = new OASMailDeliverabilityResponse();
        OASMailDeliverabilityResponse mailDeliverabilityResponse4 = mailDeliverabilityResponse3;

        System.assert(mailDeliverabilityResponse1.equals(mailDeliverabilityResponse2));
        System.assert(mailDeliverabilityResponse2.equals(mailDeliverabilityResponse1));
        System.assert(mailDeliverabilityResponse1.equals(mailDeliverabilityResponse1));
        System.assert(mailDeliverabilityResponse3.equals(mailDeliverabilityResponse4));
        System.assert(mailDeliverabilityResponse4.equals(mailDeliverabilityResponse3));
        System.assert(mailDeliverabilityResponse3.equals(mailDeliverabilityResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailDeliverabilityResponse mailDeliverabilityResponse1 = OASMailDeliverabilityResponse.getExample();
        OASMailDeliverabilityResponse mailDeliverabilityResponse2 = OASMailDeliverabilityResponse.getExample();
        OASMailDeliverabilityResponse mailDeliverabilityResponse3 = new OASMailDeliverabilityResponse();
        OASMailDeliverabilityResponse mailDeliverabilityResponse4 = new OASMailDeliverabilityResponse();

        System.assert(mailDeliverabilityResponse1.equals(mailDeliverabilityResponse2));
        System.assert(mailDeliverabilityResponse2.equals(mailDeliverabilityResponse1));
        System.assert(mailDeliverabilityResponse3.equals(mailDeliverabilityResponse4));
        System.assert(mailDeliverabilityResponse4.equals(mailDeliverabilityResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailDeliverabilityResponse mailDeliverabilityResponse1 = OASMailDeliverabilityResponse.getExample();
        OASMailDeliverabilityResponse mailDeliverabilityResponse2 = new OASMailDeliverabilityResponse();

        System.assertEquals(false, mailDeliverabilityResponse1.equals('foo'));
        System.assertEquals(false, mailDeliverabilityResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailDeliverabilityResponse mailDeliverabilityResponse1 = OASMailDeliverabilityResponse.getExample();
        OASMailDeliverabilityResponse mailDeliverabilityResponse2 = new OASMailDeliverabilityResponse();
        OASMailDeliverabilityResponse mailDeliverabilityResponse3;

        System.assertEquals(false, mailDeliverabilityResponse1.equals(mailDeliverabilityResponse3));
        System.assertEquals(false, mailDeliverabilityResponse2.equals(mailDeliverabilityResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailDeliverabilityResponse mailDeliverabilityResponse1 = OASMailDeliverabilityResponse.getExample();
        OASMailDeliverabilityResponse mailDeliverabilityResponse2 = new OASMailDeliverabilityResponse();

        System.assertEquals(mailDeliverabilityResponse1.hashCode(), mailDeliverabilityResponse1.hashCode());
        System.assertEquals(mailDeliverabilityResponse2.hashCode(), mailDeliverabilityResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailDeliverabilityResponse mailDeliverabilityResponse1 = OASMailDeliverabilityResponse.getExample();
        OASMailDeliverabilityResponse mailDeliverabilityResponse2 = OASMailDeliverabilityResponse.getExample();
        OASMailDeliverabilityResponse mailDeliverabilityResponse3 = new OASMailDeliverabilityResponse();
        OASMailDeliverabilityResponse mailDeliverabilityResponse4 = new OASMailDeliverabilityResponse();

        System.assert(mailDeliverabilityResponse1.equals(mailDeliverabilityResponse2));
        System.assert(mailDeliverabilityResponse3.equals(mailDeliverabilityResponse4));
        System.assertEquals(mailDeliverabilityResponse1.hashCode(), mailDeliverabilityResponse2.hashCode());
        System.assertEquals(mailDeliverabilityResponse3.hashCode(), mailDeliverabilityResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailDeliverabilityResponse mailDeliverabilityResponse = new OASMailDeliverabilityResponse();
        Map<String, String> x-property-mappings = mailDeliverabilityResponse.getx-property-mappings();
        System.assertEquals('tableData', x-property-mappings.get('table_data'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASMailDeliverabilityResponse mailDeliverabilityResponse = new OASMailDeliverabilityResponse();
        System.assertEquals(new List<List<String>>(), mailDeliverabilityResponse.tableData);
        System.assertEquals(null, mailDeliverabilityResponse.stat);
        System.assertEquals(null, mailDeliverabilityResponse.percent);
    }
}
