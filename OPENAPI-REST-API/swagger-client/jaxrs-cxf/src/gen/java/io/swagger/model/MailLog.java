package io.swagger.model;

import io.swagger.model.MailLogEntry;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * Mail log records
 **/
@Schema(description="Mail log records")
public class MailLog   {
  
  @Schema(example = "10234", required = true, description = "total number of mail log entries")
 /**
   * total number of mail log entries  
  **/
  private Integer total = null;
  
  @Schema(example = "0", required = true, description = "number of emails skipped in listing")
 /**
   * number of emails skipped in listing  
  **/
  private Integer skip = null;
  
  @Schema(example = "100", required = true, description = "number of emails to return")
 /**
   * number of emails to return  
  **/
  private Integer limit = null;
  
  @Schema(example = "[{\"_id\":103172,\"id\":\"17c7eda538e0005d03\",\"from\":\"person@mysite.com\",\"to\":\"client@isp.com\",\"subject\":\"sell 0.005 shares\",\"messageId\":\"<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>\",\"created\":\"2021-10-14 08:50:10\",\"time\":1634215809,\"user\":\"mb5658\",\"transtype\":\"ESMTPSA\",\"origin\":\"199.231.189.154\",\"interface\":\"feeder\",\"sendingZone\":\"interserver\",\"bodySize\":63,\"seq\":1,\"recipient\":\"client@isp.com\",\"domain\":\"interserver.net\",\"locked\":1,\"lockTime\":1634215818533,\"assigned\":\"relay1\",\"queued\":\"2021-10-14T12:50:15.487Z\",\"mxHostname\":\"mx.j.is.cc\",\"response\":\"250 2.0.0 Ok queued as C91D83E128C\"}]", required = true, description = "")
  private List<MailLogEntry> emails = new ArrayList<MailLogEntry>();
 /**
   * total number of mail log entries
   * @return total
  **/
  @JsonProperty("total")
  @NotNull
  public Integer getTotal() {
    return total;
  }

  public void setTotal(Integer total) {
    this.total = total;
  }

  public MailLog total(Integer total) {
    this.total = total;
    return this;
  }

 /**
   * number of emails skipped in listing
   * @return skip
  **/
  @JsonProperty("skip")
  @NotNull
  public Integer getSkip() {
    return skip;
  }

  public void setSkip(Integer skip) {
    this.skip = skip;
  }

  public MailLog skip(Integer skip) {
    this.skip = skip;
    return this;
  }

 /**
   * number of emails to return
   * @return limit
  **/
  @JsonProperty("limit")
  @NotNull
  public Integer getLimit() {
    return limit;
  }

  public void setLimit(Integer limit) {
    this.limit = limit;
  }

  public MailLog limit(Integer limit) {
    this.limit = limit;
    return this;
  }

 /**
   * Get emails
   * @return emails
  **/
  @JsonProperty("emails")
  @NotNull
  public List<MailLogEntry> getEmails() {
    return emails;
  }

  public void setEmails(List<MailLogEntry> emails) {
    this.emails = emails;
  }

  public MailLog emails(List<MailLogEntry> emails) {
    this.emails = emails;
    return this;
  }

  public MailLog addEmailsItem(MailLogEntry emailsItem) {
    this.emails.add(emailsItem);
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailLog {\n");
    
    sb.append("    total: ").append(toIndentedString(total)).append("\n");
    sb.append("    skip: ").append(toIndentedString(skip)).append("\n");
    sb.append("    limit: ").append(toIndentedString(limit)).append("\n");
    sb.append("    emails: ").append(toIndentedString(emails)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
