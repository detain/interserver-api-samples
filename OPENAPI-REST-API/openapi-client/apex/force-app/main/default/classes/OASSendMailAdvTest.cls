@isTest
private class OASSendMailAdvTest {
    @isTest
    private static void equalsSameInstance() {
        OASSendMailAdv sendMailAdv1 = OASSendMailAdv.getExample();
        OASSendMailAdv sendMailAdv2 = sendMailAdv1;
        OASSendMailAdv sendMailAdv3 = new OASSendMailAdv();
        OASSendMailAdv sendMailAdv4 = sendMailAdv3;

        System.assert(sendMailAdv1.equals(sendMailAdv2));
        System.assert(sendMailAdv2.equals(sendMailAdv1));
        System.assert(sendMailAdv1.equals(sendMailAdv1));
        System.assert(sendMailAdv3.equals(sendMailAdv4));
        System.assert(sendMailAdv4.equals(sendMailAdv3));
        System.assert(sendMailAdv3.equals(sendMailAdv3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASSendMailAdv sendMailAdv1 = OASSendMailAdv.getExample();
        OASSendMailAdv sendMailAdv2 = OASSendMailAdv.getExample();
        OASSendMailAdv sendMailAdv3 = new OASSendMailAdv();
        OASSendMailAdv sendMailAdv4 = new OASSendMailAdv();

        System.assert(sendMailAdv1.equals(sendMailAdv2));
        System.assert(sendMailAdv2.equals(sendMailAdv1));
        System.assert(sendMailAdv3.equals(sendMailAdv4));
        System.assert(sendMailAdv4.equals(sendMailAdv3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASSendMailAdv sendMailAdv1 = OASSendMailAdv.getExample();
        OASSendMailAdv sendMailAdv2 = new OASSendMailAdv();

        System.assertEquals(false, sendMailAdv1.equals('foo'));
        System.assertEquals(false, sendMailAdv2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASSendMailAdv sendMailAdv1 = OASSendMailAdv.getExample();
        OASSendMailAdv sendMailAdv2 = new OASSendMailAdv();
        OASSendMailAdv sendMailAdv3;

        System.assertEquals(false, sendMailAdv1.equals(sendMailAdv3));
        System.assertEquals(false, sendMailAdv2.equals(sendMailAdv3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASSendMailAdv sendMailAdv1 = OASSendMailAdv.getExample();
        OASSendMailAdv sendMailAdv2 = new OASSendMailAdv();

        System.assertEquals(sendMailAdv1.hashCode(), sendMailAdv1.hashCode());
        System.assertEquals(sendMailAdv2.hashCode(), sendMailAdv2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASSendMailAdv sendMailAdv1 = OASSendMailAdv.getExample();
        OASSendMailAdv sendMailAdv2 = OASSendMailAdv.getExample();
        OASSendMailAdv sendMailAdv3 = new OASSendMailAdv();
        OASSendMailAdv sendMailAdv4 = new OASSendMailAdv();

        System.assert(sendMailAdv1.equals(sendMailAdv2));
        System.assert(sendMailAdv3.equals(sendMailAdv4));
        System.assertEquals(sendMailAdv1.hashCode(), sendMailAdv2.hashCode());
        System.assertEquals(sendMailAdv3.hashCode(), sendMailAdv4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASSendMailAdv sendMailAdv = new OASSendMailAdv();
        Map<String, String> x-property-mappings = sendMailAdv.getx-property-mappings();
        System.assertEquals('r_from', x-property-mappings.get('from'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASSendMailAdv sendMailAdv = new OASSendMailAdv();
        System.assertEquals(new List<OASEmailAddressName>(), sendMailAdv.to);
        System.assertEquals(new List<OASEmailAddressName>(), sendMailAdv.replyto);
        System.assertEquals(new List<OASEmailAddressName>(), sendMailAdv.cc);
        System.assertEquals(new List<OASEmailAddressName>(), sendMailAdv.bcc);
        System.assertEquals(new List<OASMailAttachment>(), sendMailAdv.attachments);
        System.assertEquals(null, sendMailAdv.subject);
        System.assertEquals(null, sendMailAdv.body);
        System.assertEquals(null, sendMailAdv.r_from);
        System.assertEquals(null, sendMailAdv.id);
    }
}
