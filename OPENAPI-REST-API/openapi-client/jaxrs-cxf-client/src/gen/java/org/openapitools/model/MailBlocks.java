package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.MailBlockClickHouse;
import org.openapitools.model.MailBlockRspamd;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * The listing of blocked emails.
 */
@ApiModel(description="The listing of blocked emails.")

public class MailBlocks  {
  
  @ApiModelProperty(required = true, value = "")

  private List<MailBlockClickHouse> local = new ArrayList<>();

  @ApiModelProperty(required = true, value = "")

  private List<MailBlockClickHouse> mbtrap = new ArrayList<>();

  @ApiModelProperty(required = true, value = "")

  private List<MailBlockRspamd> subject = new ArrayList<>();
 /**
   * Get local
   * @return local
  **/
  @JsonProperty("local")
  public List<MailBlockClickHouse> getLocal() {
    return local;
  }

  public void setLocal(List<MailBlockClickHouse> local) {
    this.local = local;
  }

  public MailBlocks local(List<MailBlockClickHouse> local) {
    this.local = local;
    return this;
  }

  public MailBlocks addLocalItem(MailBlockClickHouse localItem) {
    this.local.add(localItem);
    return this;
  }

 /**
   * Get mbtrap
   * @return mbtrap
  **/
  @JsonProperty("mbtrap")
  public List<MailBlockClickHouse> getMbtrap() {
    return mbtrap;
  }

  public void setMbtrap(List<MailBlockClickHouse> mbtrap) {
    this.mbtrap = mbtrap;
  }

  public MailBlocks mbtrap(List<MailBlockClickHouse> mbtrap) {
    this.mbtrap = mbtrap;
    return this;
  }

  public MailBlocks addMbtrapItem(MailBlockClickHouse mbtrapItem) {
    this.mbtrap.add(mbtrapItem);
    return this;
  }

 /**
   * Get subject
   * @return subject
  **/
  @JsonProperty("subject")
  public List<MailBlockRspamd> getSubject() {
    return subject;
  }

  public void setSubject(List<MailBlockRspamd> subject) {
    this.subject = subject;
  }

  public MailBlocks subject(List<MailBlockRspamd> subject) {
    this.subject = subject;
    return this;
  }

  public MailBlocks addSubjectItem(MailBlockRspamd subjectItem) {
    this.subject.add(subjectItem);
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
    MailBlocks mailBlocks = (MailBlocks) o;
    return Objects.equals(this.local, mailBlocks.local) &&
        Objects.equals(this.mbtrap, mailBlocks.mbtrap) &&
        Objects.equals(this.subject, mailBlocks.subject);
  }

  @Override
  public int hashCode() {
    return Objects.hash(local, mbtrap, subject);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailBlocks {\n");
    
    sb.append("    local: ").append(toIndentedString(local)).append("\n");
    sb.append("    mbtrap: ").append(toIndentedString(mbtrap)).append("\n");
    sb.append("    subject: ").append(toIndentedString(subject)).append("\n");
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

