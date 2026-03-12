package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A memory (RAM) option available when ordering a dedicated server.
 */
@ApiModel(description="A memory (RAM) option available when ordering a dedicated server.")

public class ServerOrderMemory  {
  
 /**
  * Memory ID.
  */
  @ApiModelProperty(example = "65", value = "Memory ID.")

  private String id;

 /**
  * Memory price.
  */
  @ApiModelProperty(example = "0", value = "Memory price.")

  private String price;

 /**
  * Memory image.
  */
  @ApiModelProperty(example = "hd.jpg", value = "Memory image.")

  private String img;

 /**
  * Short description of the memory.
  */
  @ApiModelProperty(example = "20TB SATA", value = "Short description of the memory.")

  private String shortDesc;

 /**
  * Long description of the memory.
  */
  @ApiModelProperty(value = "Long description of the memory.")

  private String longDesc;

 /**
  * Manufacturer information.
  */
  @ApiModelProperty(value = "Manufacturer information.")

  private String manu;

 /**
  * Memory size.
  */
  @ApiModelProperty(example = "3000", value = "Memory size.")

  private String size;

 /**
  * Memory type.
  */
  @ApiModelProperty(value = "Memory type.")

  private String type;

 /**
  * Hidden status.
  */
  @ApiModelProperty(example = "0", value = "Hidden status.")

  private String hidden;

 /**
  * Monthly price.
  */
  @ApiModelProperty(example = "50", value = "Monthly price.")

  private Integer monthlyPrice;

 /**
  * Drive type.
  */
  @ApiModelProperty(example = "lff", value = "Drive type.")

  private String driveType;

 /**
  * Display of monthly memory price.
  */
  @ApiModelProperty(example = "$50.00", value = "Display of monthly memory price.")

  private String monthlyPriceDisplay;
 /**
   * Memory ID.
   * @return id
  **/
  @JsonProperty("id")
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
  public boolean equals(Object o) {
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

