package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.TicketsCountArray;
import io.swagger.model.TicketsRow;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A listing of support tickets.")

public class Tickets   {
  private String ima = null;
  private String custid = null;
  private String view = null;
  private Integer currentPage = null;
  private Integer limit = null;
  private Integer sortcol = null;
  private Integer sortdir = null;
  private Integer rowsOffset = null;
  private List<TicketsRow> tickets = new ArrayList<TicketsRow>();
  private Integer pages = null;
  private Integer rowsTotal = null;
  private Integer inboxCount = null;
  private TicketsCountArray countArray = null;
  private String viewText = null;

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("ima")
  @NotNull
  public String getIma() {
    return ima;
  }
  public void setIma(String ima) {
    this.ima = ima;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("custid")
  @NotNull
  public String getCustid() {
    return custid;
  }
  public void setCustid(String custid) {
    this.custid = custid;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("view")
  @NotNull
  public String getView() {
    return view;
  }
  public void setView(String view) {
    this.view = view;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("currentPage")
  @NotNull
  public Integer getCurrentPage() {
    return currentPage;
  }
  public void setCurrentPage(Integer currentPage) {
    this.currentPage = currentPage;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("limit")
  @NotNull
  public Integer getLimit() {
    return limit;
  }
  public void setLimit(Integer limit) {
    this.limit = limit;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("sortcol")
  @NotNull
  public Integer getSortcol() {
    return sortcol;
  }
  public void setSortcol(Integer sortcol) {
    this.sortcol = sortcol;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("sortdir")
  @NotNull
  public Integer getSortdir() {
    return sortdir;
  }
  public void setSortdir(Integer sortdir) {
    this.sortdir = sortdir;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("rowsOffset")
  @NotNull
  public Integer getRowsOffset() {
    return rowsOffset;
  }
  public void setRowsOffset(Integer rowsOffset) {
    this.rowsOffset = rowsOffset;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("tickets")
  @NotNull
  public List<TicketsRow> getTickets() {
    return tickets;
  }
  public void setTickets(List<TicketsRow> tickets) {
    this.tickets = tickets;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("pages")
  @NotNull
  public Integer getPages() {
    return pages;
  }
  public void setPages(Integer pages) {
    this.pages = pages;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("rowsTotal")
  @NotNull
  public Integer getRowsTotal() {
    return rowsTotal;
  }
  public void setRowsTotal(Integer rowsTotal) {
    this.rowsTotal = rowsTotal;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("inboxCount")
  @NotNull
  public Integer getInboxCount() {
    return inboxCount;
  }
  public void setInboxCount(Integer inboxCount) {
    this.inboxCount = inboxCount;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("countArray")
  @NotNull
  public TicketsCountArray getCountArray() {
    return countArray;
  }
  public void setCountArray(TicketsCountArray countArray) {
    this.countArray = countArray;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("viewText")
  @NotNull
  public String getViewText() {
    return viewText;
  }
  public void setViewText(String viewText) {
    this.viewText = viewText;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Tickets tickets = (Tickets) o;
    return Objects.equals(ima, tickets.ima) &&
        Objects.equals(custid, tickets.custid) &&
        Objects.equals(view, tickets.view) &&
        Objects.equals(currentPage, tickets.currentPage) &&
        Objects.equals(limit, tickets.limit) &&
        Objects.equals(sortcol, tickets.sortcol) &&
        Objects.equals(sortdir, tickets.sortdir) &&
        Objects.equals(rowsOffset, tickets.rowsOffset) &&
        Objects.equals(tickets, tickets.tickets) &&
        Objects.equals(pages, tickets.pages) &&
        Objects.equals(rowsTotal, tickets.rowsTotal) &&
        Objects.equals(inboxCount, tickets.inboxCount) &&
        Objects.equals(countArray, tickets.countArray) &&
        Objects.equals(viewText, tickets.viewText);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ima, custid, view, currentPage, limit, sortcol, sortdir, rowsOffset, tickets, pages, rowsTotal, inboxCount, countArray, viewText);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Tickets {\n");
    
    sb.append("    ima: ").append(toIndentedString(ima)).append("\n");
    sb.append("    custid: ").append(toIndentedString(custid)).append("\n");
    sb.append("    view: ").append(toIndentedString(view)).append("\n");
    sb.append("    currentPage: ").append(toIndentedString(currentPage)).append("\n");
    sb.append("    limit: ").append(toIndentedString(limit)).append("\n");
    sb.append("    sortcol: ").append(toIndentedString(sortcol)).append("\n");
    sb.append("    sortdir: ").append(toIndentedString(sortdir)).append("\n");
    sb.append("    rowsOffset: ").append(toIndentedString(rowsOffset)).append("\n");
    sb.append("    tickets: ").append(toIndentedString(tickets)).append("\n");
    sb.append("    pages: ").append(toIndentedString(pages)).append("\n");
    sb.append("    rowsTotal: ").append(toIndentedString(rowsTotal)).append("\n");
    sb.append("    inboxCount: ").append(toIndentedString(inboxCount)).append("\n");
    sb.append("    countArray: ").append(toIndentedString(countArray)).append("\n");
    sb.append("    viewText: ").append(toIndentedString(viewText)).append("\n");
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
