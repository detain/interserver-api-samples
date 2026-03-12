package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A memory (RAM) option available when ordering a dedicated server.")

public class ServerOrderMemory   {
  private String id = null;
  private String price = null;
  private String img = null;
  private String shortDesc = null;
  private String longDesc = null;
  private String manu = null;
  private String size = null;
  private String type = null;
  private String hidden = null;
  private Integer monthlyPrice = null;
  private String driveType = null;
  private String monthlyPriceDisplay = null;

  /**
   * Memory ID.
   **/
  
  @Schema(example = "65", description = "Memory ID.")
  @JsonProperty("id")
  @NotNull
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * Memory price.
   **/
  
  @Schema(example = "0", description = "Memory price.")
  @JsonProperty("price")
  @NotNull
  public String getPrice() {
    return price;
  }
  public void setPrice(String price) {
    this.price = price;
  }

  /**
   * Memory image.
   **/
  
  @Schema(example = "hd.jpg", description = "Memory image.")
  @JsonProperty("img")
  @NotNull
  public String getImg() {
    return img;
  }
  public void setImg(String img) {
    this.img = img;
  }

  /**
   * Short description of the memory.
   **/
  
  @Schema(example = "20TB SATA", description = "Short description of the memory.")
  @JsonProperty("short_desc")
  @NotNull
  public String getShortDesc() {
    return shortDesc;
  }
  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  /**
   * Long description of the memory.
   **/
  
  @Schema(description = "Long description of the memory.")
  @JsonProperty("long_desc")
  @NotNull
  public String getLongDesc() {
    return longDesc;
  }
  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  /**
   * Manufacturer information.
   **/
  
  @Schema(description = "Manufacturer information.")
  @JsonProperty("manu")
  @NotNull
  public String getManu() {
    return manu;
  }
  public void setManu(String manu) {
    this.manu = manu;
  }

  /**
   * Memory size.
   **/
  
  @Schema(example = "3000", description = "Memory size.")
  @JsonProperty("size")
  @NotNull
  public String getSize() {
    return size;
  }
  public void setSize(String size) {
    this.size = size;
  }

  /**
   * Memory type.
   **/
  
  @Schema(description = "Memory type.")
  @JsonProperty("type")
  @NotNull
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   * Hidden status.
   **/
  
  @Schema(example = "0", description = "Hidden status.")
  @JsonProperty("hidden")
  @NotNull
  public String getHidden() {
    return hidden;
  }
  public void setHidden(String hidden) {
    this.hidden = hidden;
  }

  /**
   * Monthly price.
   **/
  
  @Schema(example = "50", description = "Monthly price.")
  @JsonProperty("monthly_price")
  @NotNull
  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }
  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  /**
   * Drive type.
   **/
  
  @Schema(example = "lff", description = "Drive type.")
  @JsonProperty("drive_type")
  @NotNull
  public String getDriveType() {
    return driveType;
  }
  public void setDriveType(String driveType) {
    this.driveType = driveType;
  }

  /**
   * Display of monthly memory price.
   **/
  
  @Schema(example = "$50.00", description = "Display of monthly memory price.")
  @JsonProperty("monthly_price_display")
  @NotNull
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }
  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderMemory serverOrderMemory = (ServerOrderMemory) o;
    return Objects.equals(id, serverOrderMemory.id) &&
        Objects.equals(price, serverOrderMemory.price) &&
        Objects.equals(img, serverOrderMemory.img) &&
        Objects.equals(shortDesc, serverOrderMemory.shortDesc) &&
        Objects.equals(longDesc, serverOrderMemory.longDesc) &&
        Objects.equals(manu, serverOrderMemory.manu) &&
        Objects.equals(size, serverOrderMemory.size) &&
        Objects.equals(type, serverOrderMemory.type) &&
        Objects.equals(hidden, serverOrderMemory.hidden) &&
        Objects.equals(monthlyPrice, serverOrderMemory.monthlyPrice) &&
        Objects.equals(driveType, serverOrderMemory.driveType) &&
        Objects.equals(monthlyPriceDisplay, serverOrderMemory.monthlyPriceDisplay);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
