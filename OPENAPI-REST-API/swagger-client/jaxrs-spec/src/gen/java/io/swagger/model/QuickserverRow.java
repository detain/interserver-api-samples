package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A result row from the &#x60;Quickservers&#x60; &#x60;GET&#x60; request.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A result row from the `Quickservers` `GET` request.")

public class QuickserverRow   {

  private @Valid String qsId = null;

  private @Valid String qsName = null;

  private @Valid String cost = null;

  private @Valid String qsHostname = null;

  private @Valid String qsStatus = null;

  private @Valid String qsComment = null;

  /**
   * The id of the qs.
   **/
  public QuickserverRow qsId(String qsId) {
    this.qsId = qsId;
    return this;
  }

  
  @ApiModelProperty(example = "19504", required = true, value = "The id of the qs.")
  @JsonProperty("qs_id")
  @NotNull

  public String getQsId() {
    return qsId;
  }
  public void setQsId(String qsId) {
    this.qsId = qsId;
  }

  /**
   * The name of the qs.
   **/
  public QuickserverRow qsName(String qsName) {
    this.qsName = qsName;
    return this;
  }

  
  @ApiModelProperty(example = "Quickserver199", required = true, value = "The name of the qs.")
  @JsonProperty("qs_name")
  @NotNull

  public String getQsName() {
    return qsName;
  }
  public void setQsName(String qsName) {
    this.qsName = qsName;
  }

  /**
   * The cost of the qs.
   **/
  public QuickserverRow cost(String cost) {
    this.cost = cost;
    return this;
  }

  
  @ApiModelProperty(example = "65.00", required = true, value = "The cost of the qs.")
  @JsonProperty("cost")
  @NotNull

  public String getCost() {
    return cost;
  }
  public void setCost(String cost) {
    this.cost = cost;
  }

  /**
   * The hostname of the qs.
   **/
  public QuickserverRow qsHostname(String qsHostname) {
    this.qsHostname = qsHostname;
    return this;
  }

  
  @ApiModelProperty(example = "qs19504", required = true, value = "The hostname of the qs.")
  @JsonProperty("qs_hostname")
  @NotNull

  public String getQsHostname() {
    return qsHostname;
  }
  public void setQsHostname(String qsHostname) {
    this.qsHostname = qsHostname;
  }

  /**
   * The status of the qs.
   **/
  public QuickserverRow qsStatus(String qsStatus) {
    this.qsStatus = qsStatus;
    return this;
  }

  
  @ApiModelProperty(example = "canceled", required = true, value = "The status of the qs.")
  @JsonProperty("qs_status")
  @NotNull

  public String getQsStatus() {
    return qsStatus;
  }
  public void setQsStatus(String qsStatus) {
    this.qsStatus = qsStatus;
  }

  /**
   * The comment of the qs.
   **/
  public QuickserverRow qsComment(String qsComment) {
    this.qsComment = qsComment;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "The comment of the qs.")
  @JsonProperty("qs_comment")
  @NotNull

  public String getQsComment() {
    return qsComment;
  }
  public void setQsComment(String qsComment) {
    this.qsComment = qsComment;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverRow quickserverRow = (QuickserverRow) o;
    return Objects.equals(qsId, quickserverRow.qsId) &&
        Objects.equals(qsName, quickserverRow.qsName) &&
        Objects.equals(cost, quickserverRow.cost) &&
        Objects.equals(qsHostname, quickserverRow.qsHostname) &&
        Objects.equals(qsStatus, quickserverRow.qsStatus) &&
        Objects.equals(qsComment, quickserverRow.qsComment);
  }

  @Override
  public int hashCode() {
    return Objects.hash(qsId, qsName, cost, qsHostname, qsStatus, qsComment);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverRow {\n");
    
    sb.append("    qsId: ").append(toIndentedString(qsId)).append("\n");
    sb.append("    qsName: ").append(toIndentedString(qsName)).append("\n");
    sb.append("    cost: ").append(toIndentedString(cost)).append("\n");
    sb.append("    qsHostname: ").append(toIndentedString(qsHostname)).append("\n");
    sb.append("    qsStatus: ").append(toIndentedString(qsStatus)).append("\n");
    sb.append("    qsComment: ").append(toIndentedString(qsComment)).append("\n");
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
