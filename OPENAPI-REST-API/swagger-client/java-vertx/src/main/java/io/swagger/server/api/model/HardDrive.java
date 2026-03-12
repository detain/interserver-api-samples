package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * A hard drive option available for a dedicated server configuration.
 */




public class HardDrive   {
  private Integer id = null;

  private String shortDesc = null;

  private String size = null;

  private String driveType = null;

  private BigDecimal monthlyPrice = null;

  private String monthlyPriceDisplay = null;

  public HardDrive id(Integer id) {
    this.id = id;
    return this;
  }

  /**
   * Get id
   * @return id
   **/
    public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public HardDrive shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  /**
   * Get shortDesc
   * @return shortDesc
   **/
    public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public HardDrive size(String size) {
    this.size = size;
    return this;
  }

  /**
   * Get size
   * @return size
   **/
    public String getSize() {
    return size;
  }

  public void setSize(String size) {
    this.size = size;
  }

  public HardDrive driveType(String driveType) {
    this.driveType = driveType;
    return this;
  }

  /**
   * Get driveType
   * @return driveType
   **/
    public String getDriveType() {
    return driveType;
  }

  public void setDriveType(String driveType) {
    this.driveType = driveType;
  }

  public HardDrive monthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  /**
   * Get monthlyPrice
   * @return monthlyPrice
   **/
    public BigDecimal getMonthlyPrice() {
    return monthlyPrice;
  }

  public void setMonthlyPrice(BigDecimal monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  public HardDrive monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }

  /**
   * Get monthlyPriceDisplay
   * @return monthlyPriceDisplay
   **/
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
    return Objects.equals(this.id, hardDrive.id) &&
        Objects.equals(this.shortDesc, hardDrive.shortDesc) &&
        Objects.equals(this.size, hardDrive.size) &&
        Objects.equals(this.driveType, hardDrive.driveType) &&
        Objects.equals(this.monthlyPrice, hardDrive.monthlyPrice) &&
        Objects.equals(this.monthlyPriceDisplay, hardDrive.monthlyPriceDisplay);
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
