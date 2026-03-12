package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * A RAID configuration option available when ordering a dedicated server.
 **/
@Schema(description = "A RAID configuration option available when ordering a dedicated server.")


public class ServerOrderRAID   {
  @JsonProperty("id")
  private String id = null;
  @JsonProperty("price")
  private Integer price = null;
  @JsonProperty("img")
  private String img = null;
  @JsonProperty("short_desc")
  private String shortDesc = null;
  @JsonProperty("long_desc")
  private String longDesc = null;
  @JsonProperty("monthly_price")
  private Integer monthlyPrice = null;
  @JsonProperty("active")
  private String active = null;
  @JsonProperty("price_display")
  private String priceDisplay = null;
  @JsonProperty("monthly_price_display")
  private String monthlyPriceDisplay = null;
  /**
   * RAID ID.
   **/
  public ServerOrderRAID id(String id) {
    this.id = id;
    return this;
  }

  
  @Schema(example = "7", description = "RAID ID.")
  @JsonProperty("id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * RAID price.
   **/
  public ServerOrderRAID price(Integer price) {
    this.price = price;
    return this;
  }

  
  @Schema(example = "50", description = "RAID price.")
  @JsonProperty("price")
  public Integer getPrice() {
    return price;
  }
  public void setPrice(Integer price) {
    this.price = price;
  }

  /**
   * RAID image.
   **/
  public ServerOrderRAID img(String img) {
    this.img = img;
    return this;
  }

  
  @Schema(example = "raid.png", description = "RAID image.")
  @JsonProperty("img")
  public String getImg() {
    return img;
  }
  public void setImg(String img) {
    this.img = img;
  }

  /**
   * Short description of the RAID.
   **/
  public ServerOrderRAID shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

  
  @Schema(example = "Hardware Raid 5", description = "Short description of the RAID.")
  @JsonProperty("short_desc")
  public String getShortDesc() {
    return shortDesc;
  }
  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  /**
   * Long description of the RAID.
   **/
  public ServerOrderRAID longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

  
  @Schema(example = "Hardware Raid 5", description = "Long description of the RAID.")
  @JsonProperty("long_desc")
  public String getLongDesc() {
    return longDesc;
  }
  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  /**
   * Monthly price.
   **/
  public ServerOrderRAID monthlyPrice(Integer monthlyPrice) {
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
   * Active status.
   **/
  public ServerOrderRAID active(String active) {
    this.active = active;
    return this;
  }

  
  @Schema(example = "1", description = "Active status.")
  @JsonProperty("active")
  public String getActive() {
    return active;
  }
  public void setActive(String active) {
    this.active = active;
  }

  /**
   * Display of RAID price.
   **/
  public ServerOrderRAID priceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
    return this;
  }

  
  @Schema(example = "$50.00", description = "Display of RAID price.")
  @JsonProperty("price_display")
  public String getPriceDisplay() {
    return priceDisplay;
  }
  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  /**
   * Display of monthly RAID price.
   **/
  public ServerOrderRAID monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }

  
  @Schema(example = "$50.00", description = "Display of monthly RAID price.")
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
    ServerOrderRAID serverOrderRAID = (ServerOrderRAID) o;
    return Objects.equals(id, serverOrderRAID.id) &&
        Objects.equals(price, serverOrderRAID.price) &&
        Objects.equals(img, serverOrderRAID.img) &&
        Objects.equals(shortDesc, serverOrderRAID.shortDesc) &&
        Objects.equals(longDesc, serverOrderRAID.longDesc) &&
        Objects.equals(monthlyPrice, serverOrderRAID.monthlyPrice) &&
        Objects.equals(active, serverOrderRAID.active) &&
        Objects.equals(priceDisplay, serverOrderRAID.priceDisplay) &&
        Objects.equals(monthlyPriceDisplay, serverOrderRAID.monthlyPriceDisplay);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, price, img, shortDesc, longDesc, monthlyPrice, active, priceDisplay, monthlyPriceDisplay);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderRAID {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    img: ").append(toIndentedString(img)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
    sb.append("    active: ").append(toIndentedString(active)).append("\n");
    sb.append("    priceDisplay: ").append(toIndentedString(priceDisplay)).append("\n");
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
