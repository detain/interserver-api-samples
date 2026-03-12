@isTest
private class OASTemplateRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASTemplateRequest templateRequest1 = OASTemplateRequest.getExample();
        OASTemplateRequest templateRequest2 = templateRequest1;
        OASTemplateRequest templateRequest3 = new OASTemplateRequest();
        OASTemplateRequest templateRequest4 = templateRequest3;

        System.assert(templateRequest1.equals(templateRequest2));
        System.assert(templateRequest2.equals(templateRequest1));
        System.assert(templateRequest1.equals(templateRequest1));
        System.assert(templateRequest3.equals(templateRequest4));
        System.assert(templateRequest4.equals(templateRequest3));
        System.assert(templateRequest3.equals(templateRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASTemplateRequest templateRequest1 = OASTemplateRequest.getExample();
        OASTemplateRequest templateRequest2 = OASTemplateRequest.getExample();
        OASTemplateRequest templateRequest3 = new OASTemplateRequest();
        OASTemplateRequest templateRequest4 = new OASTemplateRequest();

        System.assert(templateRequest1.equals(templateRequest2));
        System.assert(templateRequest2.equals(templateRequest1));
        System.assert(templateRequest3.equals(templateRequest4));
        System.assert(templateRequest4.equals(templateRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASTemplateRequest templateRequest1 = OASTemplateRequest.getExample();
        OASTemplateRequest templateRequest2 = new OASTemplateRequest();

        System.assertEquals(false, templateRequest1.equals('foo'));
        System.assertEquals(false, templateRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASTemplateRequest templateRequest1 = OASTemplateRequest.getExample();
        OASTemplateRequest templateRequest2 = new OASTemplateRequest();
        OASTemplateRequest templateRequest3;

        System.assertEquals(false, templateRequest1.equals(templateRequest3));
        System.assertEquals(false, templateRequest2.equals(templateRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASTemplateRequest templateRequest1 = OASTemplateRequest.getExample();
        OASTemplateRequest templateRequest2 = new OASTemplateRequest();

        System.assertEquals(templateRequest1.hashCode(), templateRequest1.hashCode());
        System.assertEquals(templateRequest2.hashCode(), templateRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASTemplateRequest templateRequest1 = OASTemplateRequest.getExample();
        OASTemplateRequest templateRequest2 = OASTemplateRequest.getExample();
        OASTemplateRequest templateRequest3 = new OASTemplateRequest();
        OASTemplateRequest templateRequest4 = new OASTemplateRequest();

        System.assert(templateRequest1.equals(templateRequest2));
        System.assert(templateRequest3.equals(templateRequest4));
        System.assertEquals(templateRequest1.hashCode(), templateRequest2.hashCode());
        System.assertEquals(templateRequest3.hashCode(), templateRequest4.hashCode());
    }
}
