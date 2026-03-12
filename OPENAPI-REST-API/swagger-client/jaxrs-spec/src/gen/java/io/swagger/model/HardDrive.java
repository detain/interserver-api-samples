package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A hard drive option available for a dedicated server configuration.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A hard drive option available for a dedicated server configuration.")

public class HardDrive   {

  private @Valid Integer id = null;

  private @Valid String shortDesc = null;

  private @Valid String size = null;

  private @Valid String driveType = null;

  private @Valid BigDecimal monthlyPrice = null;

  private @Valid String monthlyPriceDisplay = null;

  /**
   **/
  public HardDrive id(Integer id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("id")
  @NotNull

  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   **/
  public HardDrive shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("short_desc")
  @NotNull

  public String getShortDesc() {
    return shortDesc;
  }
  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  /**
   **/
  public HardDrive size(String size) {
    this.size = size;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("size")
  @NotNull

  public String getSize() {
    return size;
  }
  public void setSize(String size) {
    this.size = size;
  }

  /**
   **/
  public HardDrive driveType(String driveType) {
    this.driveType = driveType;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("drive_type")
  @NotNull

  public String getDriveType() {
    return driveType;
  }
  public void setDriveType(String driveType) {
    this.driveType = driveType;
  }

  /**
   **/
  public HardDrive monthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("monthly_price")
  @NotNull

  public BigDecimal getMonthlyPrice() {
    return monthlyPrice;
  }
  public void setMonthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  /**
   **/
  public HardDrive monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("monthly_price_display")
  @NotNull

  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }
  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HardDrive hardDrive = (HardDrive) o;
    return Objects.equals(id, hardDrive.id) &&
        Objects.equals(shortDesc, hardDrive.shortDesc) &&
        Objects.equals(size, hardDrive.size) &&
        Objects.equals(driveType, hardDrive.driveType) &&
        Objects.equals(monthlyPrice, hardDrive.monthlyPrice) &&
        Objects.equals(monthlyPriceDisplay, hardDrive.monthlyPriceDisplay);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, shortDesc, size, driveType, monthlyPrice, monthlyPriceDisplay);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HardDrive {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
    sb.append("    driveType: ").append(toIndentedString(driveType)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
    sb.append("    monthlyPriceDisplay: ").append(toIndentedString(monthlyPriceDisplay)).append("\n");
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
