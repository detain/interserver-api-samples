package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Payload for updating an existing mail alert.
 */
@ApiModel(description="Payload for updating an existing mail alert.")

public class MailAlertUpdateRequest  {
  
 /**
  * Alert ID to update.
  */
  @ApiModelProperty(value = "Alert ID to update.")

  private Integer alertId;

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
   * Alert ID to update.
   * @return alertId
  **/
  @JsonProperty("alert_id")
  public Integer getAlertId() {
    return alertId;
  }

  public void setAlertId(Integer alertId) {
    this.alertId = alertId;
  }

  public MailAlertUpdateRequest alertId(Integer alertId) {
    this.alertId = alertId;
    return this;
  }

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

  public MailAlertUpdateRequest type(String type) {
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

  public MailAlertUpdateRequest value(String value) {
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

  public MailAlertUpdateRequest to(String to) {
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

  public MailAlertUpdateRequest enabled(String enabled) {
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
    MailAlertUpdateRequest mailAlertUpdateRequest = (MailAlertUpdateRequest) o;
    return Objects.equals(this.alertId, mailAlertUpdateRequest.alertId) &&
        Objects.equals(this.type, mailAlertUpdateRequest.type) &&
        Objects.equals(this.value, mailAlertUpdateRequest.value) &&
        Objects.equals(this.to, mailAlertUpdateRequest.to) &&
        Objects.equals(this.enabled, mailAlertUpdateRequest.enabled);
  }

  @Override
  public int hashCode() {
    return Objects.hash(alertId, type, value, to, enabled);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailAlertUpdateRequest {\n");
    
    sb.append("    alertId: ").append(toIndentedString(alertId)).append("\n");
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

