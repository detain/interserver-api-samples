package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

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
  * A result row from the `Quickservers` `GET` request.
 **/
@Schema(description="A result row from the `Quickservers` `GET` request.")
public class QuickserverRow   {
  
  @Schema(example = "19504", required = true, description = "The id of the qs.")
 /**
   * The id of the qs.  
  **/
  private String qsId = null;
  
  @Schema(example = "Quickserver199", required = true, description = "The name of the qs.")
 /**
   * The name of the qs.  
  **/
  private String qsName = null;
  
  @Schema(example = "65.00", required = true, description = "The cost of the qs.")
 /**
   * The cost of the qs.  
  **/
  private String cost = null;
  
  @Schema(example = "qs19504", required = true, description = "The hostname of the qs.")
 /**
   * The hostname of the qs.  
  **/
  private String qsHostname = null;
  
  @Schema(example = "canceled", required = true, description = "The status of the qs.")
 /**
   * The status of the qs.  
  **/
  private String qsStatus = null;
  
  @Schema(required = true, description = "The comment of the qs.")
 /**
   * The comment of the qs.  
  **/
  private String qsComment = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
