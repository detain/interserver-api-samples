package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.MonthlyCounts;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Monthly mail delivery status breakdown, showing counts per status category.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Monthly mail delivery status breakdown, showing counts per status category.")

public class StatusMonthlyBreakdown   {
  private MonthlyCounts _default = null;
  private MonthlyCounts failed = null;
  private MonthlyCounts rejected = null;
  private MonthlyCounts pending = null;
  private MonthlyCounts locked = null;
  private MonthlyCounts paid = null;

  /**
   **/
  public StatusMonthlyBreakdown _default(MonthlyCounts _default) {
    this._default = _default;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("default")
  @NotNull
  @Valid
  public MonthlyCounts getDefault() {
    return _default;
  }
  public void setDefault(MonthlyCounts _default) {
    this._default = _default;
  }

  /**
   **/
  public StatusMonthlyBreakdown failed(MonthlyCounts failed) {
    this.failed = failed;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("failed")
  @NotNull
  @Valid
  public MonthlyCounts getFailed() {
    return failed;
  }
  public void setFailed(MonthlyCounts failed) {
    this.failed = failed;
  }

  /**
   **/
  public StatusMonthlyBreakdown rejected(MonthlyCounts rejected) {
    this.rejected = rejected;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("rejected")
  @NotNull
  @Valid
  public MonthlyCounts getRejected() {
    return rejected;
  }
  public void setRejected(MonthlyCounts rejected) {
    this.rejected = rejected;
  }

  /**
   **/
  public StatusMonthlyBreakdown pending(MonthlyCounts pending) {
    this.pending = pending;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("pending")
  @NotNull
  @Valid
  public MonthlyCounts getPending() {
    return pending;
  }
  public void setPending(MonthlyCounts pending) {
    this.pending = pending;
  }

  /**
   **/
  public StatusMonthlyBreakdown locked(MonthlyCounts locked) {
    this.locked = locked;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("locked")
  @NotNull
  @Valid
  public MonthlyCounts getLocked() {
    return locked;
  }
  public void setLocked(MonthlyCounts locked) {
    this.locked = locked;
  }

  /**
   **/
  public StatusMonthlyBreakdown paid(MonthlyCounts paid) {
    this.paid = paid;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("paid")
  @NotNull
  @Valid
  public MonthlyCounts getPaid() {
    return paid;
  }
  public void setPaid(MonthlyCounts paid) {
    this.paid = paid;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    StatusMonthlyBreakdown statusMonthlyBreakdown = (StatusMonthlyBreakdown) o;
    return Objects.equals(_default, statusMonthlyBreakdown._default) &&
        Objects.equals(failed, statusMonthlyBreakdown.failed) &&
        Objects.equals(rejected, statusMonthlyBreakdown.rejected) &&
        Objects.equals(pending, statusMonthlyBreakdown.pending) &&
        Objects.equals(locked, statusMonthlyBreakdown.locked) &&
        Objects.equals(paid, statusMonthlyBreakdown.paid);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
