package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A result row from the `Quickservers` `GET` request.
 */
@ApiModel(description="A result row from the `Quickservers` `GET` request.")

public class QuickserverRow  {
  
 /**
  * The id of the qs.
  */
  @ApiModelProperty(example = "19504", required = true, value = "The id of the qs.")

  private String qsId;

 /**
  * The name of the qs.
  */
  @ApiModelProperty(example = "Quickserver199", required = true, value = "The name of the qs.")

  private String qsName;

 /**
  * The cost of the qs.
  */
  @ApiModelProperty(example = "65.00", required = true, value = "The cost of the qs.")

  private String cost;

 /**
  * The hostname of the qs.
  */
  @ApiModelProperty(example = "qs19504", required = true, value = "The hostname of the qs.")

  private String qsHostname;

 /**
  * The status of the qs.
  */
  @ApiModelProperty(example = "canceled", required = true, value = "The status of the qs.")

  private String qsStatus;

 /**
  * The comment of the qs.
  */
  @ApiModelProperty(example = "", required = true, value = "The comment of the qs.")

  private String qsComment;
 /**
   * The id of the qs.
   * @return qsId
  **/
  @JsonProperty("qs_id")
  public String getQsId() {
    return qsId;
  }

  public void setQsId(String qsId) {
    this.qsId = qsId;
  }

  public QuickserverRow qsId(String qsId) {
    this.qsId = qsId;
    return this;
  }

 /**
   * The name of the qs.
   * @return qsName
  **/
  @JsonProperty("qs_name")
  public String getQsName() {
    return qsName;
  }

  public void setQsName(String qsName) {
    this.qsName = qsName;
  }

  public QuickserverRow qsName(String qsName) {
    this.qsName = qsName;
    return this;
  }

 /**
   * The cost of the qs.
   * @return cost
  **/
  @JsonProperty("cost")
  public String getCost() {
    return cost;
  }

  public void setCost(String cost) {
    this.cost = cost;
  }

  public QuickserverRow cost(String cost) {
    this.cost = cost;
    return this;
  }

 /**
   * The hostname of the qs.
   * @return qsHostname
  **/
  @JsonProperty("qs_hostname")
  public String getQsHostname() {
    return qsHostname;
  }

  public void setQsHostname(String qsHostname) {
    this.qsHostname = qsHostname;
  }

  public QuickserverRow qsHostname(String qsHostname) {
    this.qsHostname = qsHostname;
    return this;
  }

 /**
   * The status of the qs.
   * @return qsStatus
  **/
  @JsonProperty("qs_status")
  public String getQsStatus() {
    return qsStatus;
  }

  public void setQsStatus(String qsStatus) {
    this.qsStatus = qsStatus;
  }

  public QuickserverRow qsStatus(String qsStatus) {
    this.qsStatus = qsStatus;
    return this;
  }

 /**
   * The comment of the qs.
   * @return qsComment
  **/
  @JsonProperty("qs_comment")
  public String getQsComment() {
    return qsComment;
  }

  public void setQsComment(String qsComment) {
    this.qsComment = qsComment;
  }

  public QuickserverRow qsComment(String qsComment) {
    this.qsComment = qsComment;
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
    QuickserverRow quickserverRow = (QuickserverRow) o;
    return Objects.equals(this.qsId, quickserverRow.qsId) &&
        Objects.equals(this.qsName, quickserverRow.qsName) &&
        Objects.equals(this.cost, quickserverRow.cost) &&
        Objects.equals(this.qsHostname, quickserverRow.qsHostname) &&
        Objects.equals(this.qsStatus, quickserverRow.qsStatus) &&
        Objects.equals(this.qsComment, quickserverRow.qsComment);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

