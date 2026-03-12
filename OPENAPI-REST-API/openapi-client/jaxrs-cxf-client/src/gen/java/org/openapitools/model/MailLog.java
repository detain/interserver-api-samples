package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.MailLogEntry;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Mail log records
 */
@ApiModel(description="Mail log records")

public class MailLog  {
  
 /**
  * total number of mail log entries
  */
  @ApiModelProperty(example = "10234", required = true, value = "total number of mail log entries")

  private Integer total;

 /**
  * number of emails skipped in listing
  */
  @ApiModelProperty(example = "0", required = true, value = "number of emails skipped in listing")

  private Integer skip;

 /**
  * number of emails to return
  */
  @ApiModelProperty(example = "100", required = true, value = "number of emails to return")

  private Integer limit;

  @ApiModelProperty(example = "[{\"_id\":103172,\"id\":\"17c7eda538e0005d03\",\"from\":\"person@mysite.com\",\"to\":\"client@isp.com\",\"subject\":\"sell 0.005 shares\",\"messageId\":\"<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>\",\"created\":\"2021-10-14 08:50:10\",\"time\":1634215809,\"user\":\"mb5658\",\"transtype\":\"ESMTPSA\",\"origin\":\"199.231.189.154\",\"interface\":\"feeder\",\"sendingZone\":\"interserver\",\"bodySize\":63,\"seq\":1,\"recipient\":\"client@isp.com\",\"domain\":\"interserver.net\",\"locked\":1,\"lockTime\":1634215818533,\"assigned\":\"relay1\",\"queued\":\"2021-10-14T12:50:15.487Z\",\"mxHostname\":\"mx.j.is.cc\",\"response\":\"250 2.0.0 Ok queued as C91D83E128C\"}]", required = true, value = "")

  private List<MailLogEntry> emails = new ArrayList<>();
 /**
   * total number of mail log entries
   * @return total
  **/
  @JsonProperty("total")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailLog mailLog = (MailLog) o;
    return Objects.equals(this.total, mailLog.total) &&
        Objects.equals(this.skip, mailLog.skip) &&
        Objects.equals(this.limit, mailLog.limit) &&
        Objects.equals(this.emails, mailLog.emails);
  }

  @Override
  public int hashCode() {
    return Objects.hash(total, skip, limit, emails);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

