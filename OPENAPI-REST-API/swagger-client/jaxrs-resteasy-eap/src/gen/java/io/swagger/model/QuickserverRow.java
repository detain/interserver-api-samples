package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A result row from the `Quickservers` `GET` request.")

public class QuickserverRow   {
  private String qsId = null;
  private String qsName = null;
  private String cost = null;
  private String qsHostname = null;
  private String qsStatus = null;
  private String qsComment = null;

  /**
   * The id of the qs.
   **/
  
  @Schema(example = "19504", required = true, description = "The id of the qs.")
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
  
  @Schema(example = "Quickserver199", required = true, description = "The name of the qs.")
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
  
  @Schema(example = "65.00", required = true, description = "The cost of the qs.")
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
  
  @Schema(example = "qs19504", required = true, description = "The hostname of the qs.")
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
  
  @Schema(example = "canceled", required = true, description = "The status of the qs.")
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
  
  @Schema(required = true, description = "The comment of the qs.")
  @JsonProperty("qs_comment")
  @NotNull
  public String getQsComment() {
    return qsComment;
  }
  public void setQsComment(String qsComment) {
    this.qsComment = qsComment;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
