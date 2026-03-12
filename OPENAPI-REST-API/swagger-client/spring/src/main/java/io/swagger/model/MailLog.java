package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.MailLogEntry;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import org.springframework.validation.annotation.Validated;
import org.openapitools.jackson.nullable.JsonNullable;
import io.swagger.configuration.NotUndefined;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonSetter;
import com.fasterxml.jackson.annotation.Nulls;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Mail log records
 */
@Schema(description = "Mail log records")
@Validated
@NotUndefined



public class MailLog   {
  @JsonProperty("total")

  private Integer total = null;

  @JsonProperty("skip")

  private Integer skip = null;

  @JsonProperty("limit")

  private Integer limit = null;

  @JsonProperty("emails")
  @Valid
  private List<MailLogEntry> emails = new ArrayList<MailLogEntry>();

  public MailLog total(Integer total) { 

    this.total = total;
    return this;
  }

  /**
   * total number of mail log entries
   * @return total
   **/
  
  @Schema(example = "10234", required = true, description = "total number of mail log entries")
  
  @NotNull
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
  
  @Schema(example = "0", required = true, description = "number of emails skipped in listing")
  
  @NotNull
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
  
  @Schema(example = "100", required = true, description = "number of emails to return")
  
  @NotNull
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
  
  @Schema(example = "[{\"_id\":103172,\"id\":\"17c7eda538e0005d03\",\"from\":\"person@mysite.com\",\"to\":\"client@isp.com\",\"subject\":\"sell 0.005 shares\",\"messageId\":\"<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>\",\"created\":\"2021-10-14 08:50:10\",\"time\":1634215809,\"user\":\"mb5658\",\"transtype\":\"ESMTPSA\",\"origin\":\"199.231.189.154\",\"interface\":\"feeder\",\"sendingZone\":\"interserver\",\"bodySize\":63,\"seq\":1,\"recipient\":\"client@isp.com\",\"domain\":\"interserver.net\",\"locked\":1,\"lockTime\":1634215818533,\"assigned\":\"relay1\",\"queued\":\"2021-10-14T12:50:15.487Z\",\"mxHostname\":\"mx.j.is.cc\",\"response\":\"250 2.0.0 Ok queued as C91D83E128C\"}]", required = true, description = "")
  
@Valid
  @NotNull
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
