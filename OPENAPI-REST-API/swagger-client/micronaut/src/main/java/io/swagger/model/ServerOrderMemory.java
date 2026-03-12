package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * A memory (RAM) option available when ordering a dedicated server.
 */
@Schema(description = "A memory (RAM) option available when ordering a dedicated server.")
@Validated
@Introspected

public class ServerOrderMemory   {
  @JsonProperty("id")
  private String id = null;

  @JsonProperty("price")
  private String price = null;

  @JsonProperty("img")
  private String img = null;

  @JsonProperty("short_desc")
  private String shortDesc = null;

  @JsonProperty("long_desc")
  private String longDesc = null;

  @JsonProperty("manu")
  private String manu = null;

  @JsonProperty("size")
  private String size = null;

  @JsonProperty("type")
  private String type = null;

  @JsonProperty("hidden")
  private String hidden = null;

  @JsonProperty("monthly_price")
  private Integer monthlyPrice = null;

  @JsonProperty("drive_type")
  private String driveType = null;

  @JsonProperty("monthly_price_display")
  private String monthlyPriceDisplay = null;

  public ServerOrderMemory id(String id) {
    this.id = id;
    return this;
  }

  /**
   * Memory ID.
   * @return id
  **/
  @Schema(example = "65", description = "Memory ID.")
  @NotNull

  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public ServerOrderMemory price(String price) {
    this.price = price;
    return this;
  }

  /**
   * Memory price.
   * @return price
  **/
  @Schema(example = "0", description = "Memory price.")
  @NotNull

  public String getPrice() {
    return price;
  }

  public void setPrice(String price) {
    this.price = price;
  }

  public ServerOrderMemory img(String img) {
    this.img = img;
    return this;
  }

  /**
   * Memory image.
   * @return img
  **/
  @Schema(example = "hd.jpg", description = "Memory image.")
  @NotNull

  public String getImg() {
    return img;
  }

  public void setImg(String img) {
    this.img = img;
  }

  public ServerOrderMemory shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  /**
   * Short description of the memory.
   * @return shortDesc
  **/
  @Schema(example = "20TB SATA", description = "Short description of the memory.")
  @NotNull

  public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public ServerOrderMemory longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

  /**
   * Long description of the memory.
   * @return longDesc
  **/
  @Schema(description = "Long description of the memory.")
  @NotNull

  public String getLongDesc() {
    return longDesc;
  }

  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  public ServerOrderMemory manu(String manu) {
    this.manu = manu;
    return this;
  }

  /**
   * Manufacturer information.
   * @return manu
  **/
  @Schema(description = "Manufacturer information.")
  @NotNull

  public String getManu() {
    return manu;
  }

  public void setManu(String manu) {
    this.manu = manu;
  }

  public ServerOrderMemory size(String size) {
    this.size = size;
    return this;
  }

  /**
   * Memory size.
   * @return size
  **/
  @Schema(example = "3000", description = "Memory size.")
  @NotNull

  public String getSize() {
    return size;
  }

  public void setSize(String size) {
    this.size = size;
  }

  public ServerOrderMemory type(String type) {
    this.type = type;
    return this;
  }

  /**
   * Memory type.
   * @return type
  **/
  @Schema(description = "Memory type.")
  @NotNull

  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public ServerOrderMemory hidden(String hidden) {
    this.hidden = hidden;
    return this;
  }

  /**
   * Hidden status.
   * @return hidden
  **/
  @Schema(example = "0", description = "Hidden status.")
  @NotNull

  public String getHidden() {
    return hidden;
  }

  public void setHidden(String hidden) {
    this.hidden = hidden;
  }

  public ServerOrderMemory monthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  /**
   * Monthly price.
   * @return monthlyPrice
  **/
  @Schema(example = "50", description = "Monthly price.")
  @NotNull

  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }

  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  public ServerOrderMemory driveType(String driveType) {
    this.driveType = driveType;
    return this;
  }

  /**
   * Drive type.
   * @return driveType
  **/
  @Schema(example = "lff", description = "Drive type.")
  @NotNull

  public String getDriveType() {
    return driveType;
  }

  public void setDriveType(String driveType) {
    this.driveType = driveType;
  }

  public ServerOrderMemory monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }

  /**
   * Display of monthly memory price.
   * @return monthlyPriceDisplay
  **/
  @Schema(example = "$50.00", description = "Display of monthly memory price.")
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
    ServerOrderMemory serverOrderMemory = (ServerOrderMemory) o;
    return Objects.equals(this.id, serverOrderMemory.id) &&
        Objects.equals(this.price, serverOrderMemory.price) &&
        Objects.equals(this.img, serverOrderMemory.img) &&
        Objects.equals(this.shortDesc, serverOrderMemory.shortDesc) &&
        Objects.equals(this.longDesc, serverOrderMemory.longDesc) &&
        Objects.equals(this.manu, serverOrderMemory.manu) &&
        Objects.equals(this.size, serverOrderMemory.size) &&
        Objects.equals(this.type, serverOrderMemory.type) &&
        Objects.equals(this.hidden, serverOrderMemory.hidden) &&
        Objects.equals(this.monthlyPrice, serverOrderMemory.monthlyPrice) &&
        Objects.equals(this.driveType, serverOrderMemory.driveType) &&
        Objects.equals(this.monthlyPriceDisplay, serverOrderMemory.monthlyPriceDisplay);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, price, img, shortDesc, longDesc, manu, size, type, hidden, monthlyPrice, driveType, monthlyPriceDisplay);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderMemory {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    img: ").append(toIndentedString(img)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    manu: ").append(toIndentedString(manu)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    hidden: ").append(toIndentedString(hidden)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
    sb.append("    driveType: ").append(toIndentedString(driveType)).append("\n");
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
