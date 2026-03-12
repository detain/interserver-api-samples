package io.swagger.model;

import io.swagger.model.InlineResponse2012OrderDetails;

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

public class InlineResponse2012   {
  
  @Schema(example = "true", description = "")
  private Boolean success = null;
  
  @Schema(example = "ScrubIp order is placed.", description = "")
  private String text = null;
  
  @Schema(description = "")
  private InlineResponse2012OrderDetails orderDetails = null;
 /**
   * Get success
   * @return success
  **/
  @JsonProperty("success")
  public Boolean isSuccess() {
    return success;
  }

  public void setSuccess(Boolean success) {
    this.success = success;
  }

  public InlineResponse2012 success(Boolean success) {
    this.success = success;
    return this;
  }

 /**
   * Get text
   * @return text
  **/
  @JsonProperty("text")
  public String getText() {
    return text;
  }

  public void setText(String text) {
    this.text = text;
  }

  public InlineResponse2012 text(String text) {
    this.text = text;
    return this;
  }

 /**
   * Get orderDetails
   * @return orderDetails
  **/
  @JsonProperty("order_details")
  public InlineResponse2012OrderDetails getOrderDetails() {
    return orderDetails;
  }

  public void setOrderDetails(InlineResponse2012OrderDetails orderDetails) {
    this.orderDetails = orderDetails;
  }

  public InlineResponse2012 orderDetails(InlineResponse2012OrderDetails orderDetails) {
    this.orderDetails = orderDetails;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse2012 {\n");
    
    sb.append("    success: ").append(toIndentedString(success)).append("\n");
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
    sb.append("    orderDetails: ").append(toIndentedString(orderDetails)).append("\n");
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
