package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.server.api.model.MailLogEntry;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Mail log records
 */




public class MailLog   {
  private Integer total = null;

  private Integer skip = null;

  private Integer limit = null;

  
  private List<MailLogEntry> emails = new ArrayList<MailLogEntry>();

  public MailLog total(Integer total) {
    this.total = total;
    return this;
  }

  /**
   * total number of mail log entries
   * @return total
   **/
    public Integer getTotal() {
    return total;
  }

  public void setTotal(Integer total) {
    this.total = total;
  }

  public MailLog skip(Integer skip) {
    this.skip = skip;
    return this;
  }

  /**
   * number of emails skipped in listing
   * @return skip
   **/
    public Integer getSkip() {
    return skip;
  }

  public void setSkip(Integer skip) {
    this.skip = skip;
  }

  public MailLog limit(Integer limit) {
    this.limit = limit;
    return this;
  }

  /**
   * number of emails to return
   * @return limit
   **/
    public Integer getLimit() {
    return limit;
  }

  public void setLimit(Integer limit) {
    this.limit = limit;
  }

  public MailLog emails(List<MailLogEntry> emails) {
    this.emails = emails;
    return this;
  }

  public MailLog addEmailsItem(MailLogEntry emailsItem) {
    this.emails.add(emailsItem);
    return this;
  }

  /**
   * Get emails
   * @return emails
   **/
    public List<MailLogEntry> getEmails() {
    return emails;
  }

  public void setEmails(List<MailLogEntry> emails) {
    this.emails = emails;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
