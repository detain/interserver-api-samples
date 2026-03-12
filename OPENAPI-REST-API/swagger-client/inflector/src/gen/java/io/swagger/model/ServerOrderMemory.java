package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * A memory (RAM) option available when ordering a dedicated server.
 **/
@Schema(description = "A memory (RAM) option available when ordering a dedicated server.")


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
  /**
   * Memory ID.
   **/
  public ServerOrderMemory id(String id) {
    this.id = id;
    return this;
  }

  
  @Schema(example = "65", description = "Memory ID.")
  @JsonProperty("id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * Memory price.
   **/
  public ServerOrderMemory price(String price) {
    this.price = price;
    return this;
  }

  
  @Schema(example = "0", description = "Memory price.")
  @JsonProperty("price")
  public String getPrice() {
    return price;
  }
  public void setPrice(String price) {
    this.price = price;
  }

  /**
   * Memory image.
   **/
  public ServerOrderMemory img(String img) {
    this.img = img;
    return this;
  }

  
  @Schema(example = "hd.jpg", description = "Memory image.")
  @JsonProperty("img")
  public String getImg() {
    return img;
  }
  public void setImg(String img) {
    this.img = img;
  }

  /**
   * Short description of the memory.
   **/
  public ServerOrderMemory shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  
  @Schema(example = "20TB SATA", description = "Short description of the memory.")
  @JsonProperty("short_desc")
  public String getShortDesc() {
    return shortDesc;
  }
  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  /**
   * Long description of the memory.
   **/
  public ServerOrderMemory longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

  
  @Schema(description = "Long description of the memory.")
  @JsonProperty("long_desc")
  public String getLongDesc() {
    return longDesc;
  }
  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  /**
   * Manufacturer information.
   **/
  public ServerOrderMemory manu(String manu) {
    this.manu = manu;
    return this;
  }

  
  @Schema(description = "Manufacturer information.")
  @JsonProperty("manu")
  public String getManu() {
    return manu;
  }
  public void setManu(String manu) {
    this.manu = manu;
  }

  /**
   * Memory size.
   **/
  public ServerOrderMemory size(String size) {
    this.size = size;
    return this;
  }

  
  @Schema(example = "3000", description = "Memory size.")
  @JsonProperty("size")
  public String getSize() {
    return size;
  }
  public void setSize(String size) {
    this.size = size;
  }

  /**
   * Memory type.
   **/
  public ServerOrderMemory type(String type) {
    this.type = type;
    return this;
  }

  
  @Schema(description = "Memory type.")
  @JsonProperty("type")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   * Hidden status.
   **/
  public ServerOrderMemory hidden(String hidden) {
    this.hidden = hidden;
    return this;
  }

  
  @Schema(example = "0", description = "Hidden status.")
  @JsonProperty("hidden")
  public String getHidden() {
    return hidden;
  }
  public void setHidden(String hidden) {
    this.hidden = hidden;
  }

  /**
   * Monthly price.
   **/
  public ServerOrderMemory monthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

  
  @Schema(example = "50", description = "Monthly price.")
  @JsonProperty("monthly_price")
  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }
  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  /**
   * Drive type.
   **/
  public ServerOrderMemory driveType(String driveType) {
    this.driveType = driveType;
    return this;
  }

  
  @Schema(example = "lff", description = "Drive type.")
  @JsonProperty("drive_type")
  public String getDriveType() {
    return driveType;
  }
  public void setDriveType(String driveType) {
    this.driveType = driveType;
  }

  /**
   * Display of monthly memory price.
   **/
  public ServerOrderMemory monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }

  
  @Schema(example = "$50.00", description = "Display of monthly memory price.")
  @JsonProperty("monthly_price_display")
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
