package io.swagger.model;

import io.swagger.model.MailBlockClickHouse;
import io.swagger.model.MailBlockRspamd;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * The listing of blocked emails.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "The listing of blocked emails.")

public class MailBlocks   {

  private @Valid List<MailBlockClickHouse> local = new ArrayList<MailBlockClickHouse>();

  private @Valid List<MailBlockClickHouse> mbtrap = new ArrayList<MailBlockClickHouse>();

  private @Valid List<MailBlockRspamd> subject = new ArrayList<MailBlockRspamd>();

  /**
   **/
  public MailBlocks local(List<MailBlockClickHouse> local) {
    this.local = local;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("local")
  @NotNull

  public List<MailBlockClickHouse> getLocal() {
    return local;
  }
  public void setLocal(List<MailBlockClickHouse> local) {
    this.local = local;
  }

  /**
   **/
  public MailBlocks mbtrap(List<MailBlockClickHouse> mbtrap) {
    this.mbtrap = mbtrap;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("mbtrap")
  @NotNull

  public List<MailBlockClickHouse> getMbtrap() {
    return mbtrap;
  }
  public void setMbtrap(List<MailBlockClickHouse> mbtrap) {
    this.mbtrap = mbtrap;
  }

  /**
   **/
  public MailBlocks subject(List<MailBlockRspamd> subject) {
    this.subject = subject;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("subject")
  @NotNull

  public List<MailBlockRspamd> getSubject() {
    return subject;
  }
  public void setSubject(List<MailBlockRspamd> subject) {
    this.subject = subject;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailBlocks mailBlocks = (MailBlocks) o;
    return Objects.equals(local, mailBlocks.local) &&
        Objects.equals(mbtrap, mailBlocks.mbtrap) &&
        Objects.equals(subject, mailBlocks.subject);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
