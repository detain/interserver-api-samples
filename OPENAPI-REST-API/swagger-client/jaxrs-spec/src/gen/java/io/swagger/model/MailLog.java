package io.swagger.model;

import io.swagger.model.MailLogEntry;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Mail log records
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Mail log records")

public class MailLog   {

  private @Valid Integer total = null;

  private @Valid Integer skip = null;

  private @Valid Integer limit = null;

  private @Valid List<MailLogEntry> emails = new ArrayList<MailLogEntry>();

  /**
   * total number of mail log entries
   **/
  public MailLog total(Integer total) {
    this.total = total;
    return this;
  }

  
  @ApiModelProperty(example = "10234", required = true, value = "total number of mail log entries")
  @JsonProperty("total")
  @NotNull

  public Integer getTotal() {
    return total;
  }
  public void setTotal(Integer total) {
    this.total = total;
  }

  /**
   * number of emails skipped in listing
   **/
  public MailLog skip(Integer skip) {
    this.skip = skip;
    return this;
  }

  
  @ApiModelProperty(example = "0", required = true, value = "number of emails skipped in listing")
  @JsonProperty("skip")
  @NotNull

  public Integer getSkip() {
    return skip;
  }
  public void setSkip(Integer skip) {
    this.skip = skip;
  }

  /**
   * number of emails to return
   **/
  public MailLog limit(Integer limit) {
    this.limit = limit;
    return this;
  }

  
  @ApiModelProperty(example = "100", required = true, value = "number of emails to return")
  @JsonProperty("limit")
  @NotNull

  public Integer getLimit() {
    return limit;
  }
  public void setLimit(Integer limit) {
    this.limit = limit;
  }

  /**
   **/
  public MailLog emails(List<MailLogEntry> emails) {
    this.emails = emails;
    return this;
  }

  
  @ApiModelProperty(example = "[{\"_id\":103172,\"id\":\"17c7eda538e0005d03\",\"from\":\"person@mysite.com\",\"to\":\"client@isp.com\",\"subject\":\"sell 0.005 shares\",\"messageId\":\"<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>\",\"created\":\"2021-10-14 08:50:10\",\"time\":1634215809,\"user\":\"mb5658\",\"transtype\":\"ESMTPSA\",\"origin\":\"199.231.189.154\",\"interface\":\"feeder\",\"sendingZone\":\"interserver\",\"bodySize\":63,\"seq\":1,\"recipient\":\"client@isp.com\",\"domain\":\"interserver.net\",\"locked\":1,\"lockTime\":1634215818533,\"assigned\":\"relay1\",\"queued\":\"2021-10-14T12:50:15.487Z\",\"mxHostname\":\"mx.j.is.cc\",\"response\":\"250 2.0.0 Ok queued as C91D83E128C\"}]", required = true, value = "")
  @JsonProperty("emails")
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
    return Objects.equals(total, mailLog.total) &&
        Objects.equals(skip, mailLog.skip) &&
        Objects.equals(limit, mailLog.limit) &&
        Objects.equals(emails, mailLog.emails);
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
