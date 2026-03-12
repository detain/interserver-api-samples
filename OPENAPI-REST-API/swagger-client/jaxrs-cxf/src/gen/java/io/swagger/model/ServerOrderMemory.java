package io.swagger.model;

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
  * A memory (RAM) option available when ordering a dedicated server.
 **/
@Schema(description="A memory (RAM) option available when ordering a dedicated server.")
public class ServerOrderMemory   {
  
  @Schema(example = "65", description = "Memory ID.")
 /**
   * Memory ID.  
  **/
  private String id = null;
  
  @Schema(example = "0", description = "Memory price.")
 /**
   * Memory price.  
  **/
  private String price = null;
  
  @Schema(example = "hd.jpg", description = "Memory image.")
 /**
   * Memory image.  
  **/
  private String img = null;
  
  @Schema(example = "20TB SATA", description = "Short description of the memory.")
 /**
   * Short description of the memory.  
  **/
  private String shortDesc = null;
  
  @Schema(description = "Long description of the memory.")
 /**
   * Long description of the memory.  
  **/
  private String longDesc = null;
  
  @Schema(description = "Manufacturer information.")
 /**
   * Manufacturer information.  
  **/
  private String manu = null;
  
  @Schema(example = "3000", description = "Memory size.")
 /**
   * Memory size.  
  **/
  private String size = null;
  
  @Schema(description = "Memory type.")
 /**
   * Memory type.  
  **/
  private String type = null;
  
  @Schema(example = "0", description = "Hidden status.")
 /**
   * Hidden status.  
  **/
  private String hidden = null;
  
  @Schema(example = "50", description = "Monthly price.")
 /**
   * Monthly price.  
  **/
  private Integer monthlyPrice = null;
  
  @Schema(example = "lff", description = "Drive type.")
 /**
   * Drive type.  
  **/
  private String driveType = null;
  
  @Schema(example = "$50.00", description = "Display of monthly memory price.")
 /**
   * Display of monthly memory price.  
  **/
  private String monthlyPriceDisplay = null;
 /**
   * Memory ID.
   * @return id
  **/
  @JsonProperty("id")
  @NotNull
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public ServerOrderMemory id(String id) {
    this.id = id;
    return this;
  }

 /**
   * Memory price.
   * @return price
  **/
  @JsonProperty("price")
  @NotNull
  public String getPrice() {
    return price;
  }

  public void setPrice(String price) {
    this.price = price;
  }

  public ServerOrderMemory price(String price) {
    this.price = price;
    return this;
  }

 /**
   * Memory image.
   * @return img
  **/
  @JsonProperty("img")
  @NotNull
  public String getImg() {
    return img;
  }

  public void setImg(String img) {
    this.img = img;
  }

  public ServerOrderMemory img(String img) {
    this.img = img;
    return this;
  }

 /**
   * Short description of the memory.
   * @return shortDesc
  **/
  @JsonProperty("short_desc")
  @NotNull
  public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public ServerOrderMemory shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

 /**
   * Long description of the memory.
   * @return longDesc
  **/
  @JsonProperty("long_desc")
  @NotNull
  public String getLongDesc() {
    return longDesc;
  }

  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  public ServerOrderMemory longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

 /**
   * Manufacturer information.
   * @return manu
  **/
  @JsonProperty("manu")
  @NotNull
  public String getManu() {
    return manu;
  }

  public void setManu(String manu) {
    this.manu = manu;
  }

  public ServerOrderMemory manu(String manu) {
    this.manu = manu;
    return this;
  }

 /**
   * Memory size.
   * @return size
  **/
  @JsonProperty("size")
  @NotNull
  public String getSize() {
    return size;
  }

  public void setSize(String size) {
    this.size = size;
  }

  public ServerOrderMemory size(String size) {
    this.size = size;
    return this;
  }

 /**
   * Memory type.
   * @return type
  **/
  @JsonProperty("type")
  @NotNull
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public ServerOrderMemory type(String type) {
    this.type = type;
    return this;
  }

 /**
   * Hidden status.
   * @return hidden
  **/
  @JsonProperty("hidden")
  @NotNull
  public String getHidden() {
    return hidden;
  }

  public void setHidden(String hidden) {
    this.hidden = hidden;
  }

  public ServerOrderMemory hidden(String hidden) {
    this.hidden = hidden;
    return this;
  }

 /**
   * Monthly price.
   * @return monthlyPrice
  **/
  @JsonProperty("monthly_price")
  @NotNull
  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }

  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  public ServerOrderMemory monthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

 /**
   * Drive type.
   * @return driveType
  **/
  @JsonProperty("drive_type")
  @NotNull
  public String getDriveType() {
    return driveType;
  }

  public void setDriveType(String driveType) {
    this.driveType = driveType;
  }

  public ServerOrderMemory driveType(String driveType) {
    this.driveType = driveType;
    return this;
  }

 /**
   * Display of monthly memory price.
   * @return monthlyPriceDisplay
  **/
  @JsonProperty("monthly_price_display")
  @NotNull
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }

  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }

  public ServerOrderMemory monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
