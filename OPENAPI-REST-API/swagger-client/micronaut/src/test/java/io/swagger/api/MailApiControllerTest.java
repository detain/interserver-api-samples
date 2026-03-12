package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.DenyRuleNew;
import io.swagger.model.DenyRuleRecord;
import io.swagger.model.EmailAddress;
import io.swagger.model.EmailAddressName;
import io.swagger.model.GenericResponse;
import io.swagger.model.InlineResponse2008;
import io.swagger.model.InlineResponse401;
import io.swagger.model.MailAlertRequest;
import io.swagger.model.MailAlertUpdateRequest;
import io.swagger.model.MailAlertsResponse;
import io.swagger.model.MailAttachment;
import io.swagger.model.MailBlocks;
import io.swagger.model.MailDelistRequest;
import io.swagger.model.MailDelistResponse;
import io.swagger.model.MailDeliverabilityResponse;
import io.swagger.model.MailLog;
import io.swagger.model.MailOrder;
import io.swagger.model.MailRow;
import io.swagger.model.MailSchema;
import io.swagger.model.MailStatsType;
import io.swagger.model.SendMail;
import io.swagger.model.SendMailAdv;
import io.swagger.model.SuccessTextResponse;

import io.micronaut.http.HttpResponse;
import io.micronaut.http.HttpStatus;
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import jakarta.inject.Inject;

import java.util.*;

import static org.junit.jupiter.api.Assumptions.assumeTrue;

@MicronautTest
class MailApiControllerTest {

    @Inject
    private MailApi api;

    @Test
    void addMailTest() {
        try {
            //TODO: api.addMail().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void addRuleTest() {
        DenyRuleNew body = null;
        Integer id = null;
        try {
            //TODO: api.addRule(body, id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void createMailAlertTest() {
        MailAlertRequest body = null;
        Integer id = null;
        try {
            //TODO: api.createMailAlert(body, id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void deleteMailAlertTest() {
        Integer id = null;
        Integer alertId = null;
        try {
            //TODO: api.deleteMailAlert(id, alertId).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void deleteRuleTest() {
        Integer id = null;
        String rule = null;
        try {
            //TODO: api.deleteRule(id, rule).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void delistBlockFormTest() {
        String email = null;
        Integer id = null;
        try {
            //TODO: api.delistBlock(email, id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getMailAlertsTest() {
        Integer id = null;
        try {
            //TODO: api.getMailAlerts(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getMailBlocksTest() {
        Integer id = null;
        try {
            //TODO: api.getMailBlocks(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getMailDelistTest() {
        Integer id = null;
        try {
            //TODO: api.getMailDelist(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getMailDeliverabilityTest() {
        Integer id = null;
        try {
            //TODO: api.getMailDeliverability(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getMailInfoTest() {
        Integer id = null;
        try {
            //TODO: api.getMailInfo(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getMailInvoicesTest() {
        Integer id = null;
        try {
            //TODO: api.getMailInvoices(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getMailListTest() {
        try {
            //TODO: api.getMailList().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getMailWelcomeEmailTest() {
        Integer id = null;
        try {
            //TODO: api.getMailWelcomeEmail(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getNewMailTest() {
        try {
            //TODO: api.getNewMail().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getRulesTest() {
        Integer id = null;
        try {
            //TODO: api.getRules(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void getStatsTest() {
        Integer id = null;
        String time = null;
        try {
            //TODO: api.getStats(id, time).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void mailCancelTest() {
        Integer id = null;
        try {
            //TODO: api.mailCancel(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void postMailDelistTest() {
        MailDelistRequest body = null;
        Integer id = null;
        try {
            //TODO: api.postMailDelist(body, id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void putMailTest() {
        try {
            //TODO: api.putMail().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void resetMailPasswordTest() {
        Integer id = null;
        try {
            //TODO: api.resetMailPassword(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void sendAdvMailTest() {
        SendMailAdv body = null;
        Integer id = null;
        try {
            //TODO: api.sendAdvMail(body, id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void sendMailTest() {
        SendMail body = null;
        Integer id = null;
        try {
            //TODO: api.sendMail(body, id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void updateMailAlertTest() {
        MailAlertUpdateRequest body = null;
        Integer id = null;
        try {
            //TODO: api.updateMailAlert(body, id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void updateMailInfoTest() {
        String id = null;
        try {
            //TODO: api.updateMailInfo(id).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void viewMailLogTest() {
        Integer id = null;
        Long id = null;
        String origin = null;
        String mx = null;
        String from = null;
        String to = null;
        String subject = null;
        String mailid = null;
        Integer skip = null;
        Integer limit = null;
        Long startDate = null;
        Long endDate = null;
        String delivered = null;
        try {
            //TODO: api.viewMailLog(id, id, origin, mx, from, to, subject, mailid, skip, limit, startDate, endDate, delivered).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

}
