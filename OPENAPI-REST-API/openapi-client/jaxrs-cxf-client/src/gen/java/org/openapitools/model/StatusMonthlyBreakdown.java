package org.openapitools.model;

import org.openapitools.model.MonthlyCounts;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Monthly mail delivery status breakdown, showing counts per status category.
 */
@ApiModel(description="Monthly mail delivery status breakdown, showing counts per status category.")

public class StatusMonthlyBreakdown  {
  
  @ApiModelProperty(required = true, value = "")

  private MonthlyCounts _default = new HashMap<>();

  @ApiModelProperty(required = true, value = "")

  private MonthlyCounts failed = new HashMap<>();

  @ApiModelProperty(required = true, value = "")

  private MonthlyCounts rejected = new HashMap<>();

  @ApiModelProperty(required = true, value = "")

  private MonthlyCounts pending = new HashMap<>();

  @ApiModelProperty(required = true, value = "")

  private MonthlyCounts locked = new HashMap<>();

  @ApiModelProperty(required = true, value = "")

  private MonthlyCounts paid = new HashMap<>();
 /**
   * Get _default
   * @return _default
  **/
  @JsonProperty("default")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    StatusMonthlyBreakdown statusMonthlyBreakdown = (StatusMonthlyBreakdown) o;
    return Objects.equals(this._default, statusMonthlyBreakdown._default) &&
        Objects.equals(this.failed, statusMonthlyBreakdown.failed) &&
        Objects.equals(this.rejected, statusMonthlyBreakdown.rejected) &&
        Objects.equals(this.pending, statusMonthlyBreakdown.pending) &&
        Objects.equals(this.locked, statusMonthlyBreakdown.locked) &&
        Objects.equals(this.paid, statusMonthlyBreakdown.paid);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_default, failed, rejected, pending, locked, paid);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

