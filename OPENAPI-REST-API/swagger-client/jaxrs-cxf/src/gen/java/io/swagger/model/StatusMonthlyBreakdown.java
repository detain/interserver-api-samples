package io.swagger.model;

import io.swagger.model.MonthlyCounts;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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
  * Monthly mail delivery status breakdown, showing counts per status category.
 **/
@Schema(description="Monthly mail delivery status breakdown, showing counts per status category.")
public class StatusMonthlyBreakdown   {
  
  @Schema(required = true, description = "")
  private MonthlyCounts _default = null;
  
  @Schema(required = true, description = "")
  private MonthlyCounts failed = null;
  
  @Schema(required = true, description = "")
  private MonthlyCounts rejected = null;
  
  @Schema(required = true, description = "")
  private MonthlyCounts pending = null;
  
  @Schema(required = true, description = "")
  private MonthlyCounts locked = null;
  
  @Schema(required = true, description = "")
  private MonthlyCounts paid = null;
 /**
   * Get _default
   * @return _default
  **/
  @JsonProperty("default")
  @NotNull
  public MonthlyCounts getDefault() {
    return _default;
  }

  public void setDefault(MonthlyCounts _default) {
    this._default = _default;
  }

  public StatusMonthlyBreakdown _default(MonthlyCounts _default) {
    this._default = _default;
    return this;
  }

 /**
   * Get failed
   * @return failed
  **/
  @JsonProperty("failed")
  @NotNull
  public MonthlyCounts getFailed() {
    return failed;
  }

  public void setFailed(MonthlyCounts failed) {
    this.failed = failed;
  }

  public StatusMonthlyBreakdown failed(MonthlyCounts failed) {
    this.failed = failed;
    return this;
  }

 /**
   * Get rejected
   * @return rejected
  **/
  @JsonProperty("rejected")
  @NotNull
  public MonthlyCounts getRejected() {
    return rejected;
  }

  public void setRejected(MonthlyCounts rejected) {
    this.rejected = rejected;
  }

  public StatusMonthlyBreakdown rejected(MonthlyCounts rejected) {
    this.rejected = rejected;
    return this;
  }

 /**
   * Get pending
   * @return pending
  **/
  @JsonProperty("pending")
  @NotNull
  public MonthlyCounts getPending() {
    return pending;
  }

  public void setPending(MonthlyCounts pending) {
    this.pending = pending;
  }

  public StatusMonthlyBreakdown pending(MonthlyCounts pending) {
    this.pending = pending;
    return this;
  }

 /**
   * Get locked
   * @return locked
  **/
  @JsonProperty("locked")
  @NotNull
  public MonthlyCounts getLocked() {
    return locked;
  }

  public void setLocked(MonthlyCounts locked) {
    this.locked = locked;
  }

  public StatusMonthlyBreakdown locked(MonthlyCounts locked) {
    this.locked = locked;
    return this;
  }

 /**
   * Get paid
   * @return paid
  **/
  @JsonProperty("paid")
  @NotNull
  public MonthlyCounts getPaid() {
    return paid;
  }

  public void setPaid(MonthlyCounts paid) {
    this.paid = paid;
  }

  public StatusMonthlyBreakdown paid(MonthlyCounts paid) {
    this.paid = paid;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class StatusMonthlyBreakdown {\n");
    
    sb.append("    _default: ").append(toIndentedString(_default)).append("\n");
    sb.append("    failed: ").append(toIndentedString(failed)).append("\n");
    sb.append("    rejected: ").append(toIndentedString(rejected)).append("\n");
    sb.append("    pending: ").append(toIndentedString(pending)).append("\n");
    sb.append("    locked: ").append(toIndentedString(locked)).append("\n");
    sb.append("    paid: ").append(toIndentedString(paid)).append("\n");
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
