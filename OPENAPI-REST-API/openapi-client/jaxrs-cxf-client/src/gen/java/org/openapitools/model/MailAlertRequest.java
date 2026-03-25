package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Payload for creating a mail alert.
 */
@ApiModel(description="Payload for creating a mail alert.")

public class MailAlertRequest  {
  
 /**
  * Alert type identifier.
  */
  @ApiModelProperty(value = "Alert type identifier.")

  private String type;

 /**
  * Alert value or threshold.
  */
  @ApiModelProperty(value = "Alert value or threshold.")

  private String value;

 /**
  * Email address to notify.
  */
  @ApiModelProperty(value = "Email address to notify.")

  private String to;

 /**
  * Whether the alert is enabled.
  */
  @ApiModelProperty(value = "Whether the alert is enabled.")

  private String enabled;
 /**
   * Alert type identifier.
   * @return type
  **/
  @JsonProperty("type")
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public MailAlertRequest type(String type) {
    this.type = type;
    return this;
  }

 /**
   * Alert value or threshold.
   * @return value
  **/
  @JsonProperty("value")
  public String getValue() {
    return value;
  }

  public void setValue(String value) {
    this.value = value;
  }

  public MailAlertRequest value(String value) {
    this.value = value;
    return this;
  }

 /**
   * Email address to notify.
   * @return to
  **/
  @JsonProperty("to")
  public String getTo() {
    return to;
  }

  public void setTo(String to) {
    this.to = to;
  }

  public MailAlertRequest to(String to) {
    this.to = to;
    return this;
  }

 /**
   * Whether the alert is enabled.
   * @return enabled
  **/
  @JsonProperty("enabled")
  public String getEnabled() {
    return enabled;
  }

  public void setEnabled(String enabled) {
    this.enabled = enabled;
  }

  public MailAlertRequest enabled(String enabled) {
    this.enabled = enabled;
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
    MailAlertRequest mailAlertRequest = (MailAlertRequest) o;
    return Objects.equals(this.type, mailAlertRequest.type) &&
        Objects.equals(this.value, mailAlertRequest.value) &&
        Objects.equals(this.to, mailAlertRequest.to) &&
        Objects.equals(this.enabled, mailAlertRequest.enabled);
  }

  @Override
  public int hashCode() {
    return Objects.hash(type, value, to, enabled);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailAlertRequest {\n");
    
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
    sb.append("    to: ").append(toIndentedString(to)).append("\n");
    sb.append("    enabled: ").append(toIndentedString(enabled)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

