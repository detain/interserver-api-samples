(ns inter-server-management-api.specs.quickserver
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.quickserver-service-info :refer :all]
            [inter-server-management-api.specs.quickserver-client-link :refer :all]
            [inter-server-management-api.specs.quickserver-billing-details :refer :all]
            [inter-server-management-api.specs.quickserver-service-master :refer :all]
            [inter-server-management-api.specs.quickserver-service-extra :refer :all]
            [inter-server-management-api.specs.quickserver-extra-info-tables :refer :all]
            )
  (:import (java.io File)))


(def quickserver-data
  {
   (ds/req :serviceInfo) quickserver-service-info-spec
   (ds/req :client_links) (s/coll-of quickserver-client-link-spec)
   (ds/req :billingDetails) quickserver-billing-details-spec
   (ds/req :custCurrency) string?
   (ds/req :custCurrencySymbol) string?
   (ds/req :serviceMaster) quickserver-service-master-spec
   (ds/req :package) string?
   (ds/req :os_template) string?
   (ds/req :serviceExtra) quickserver-service-extra-spec
   (ds/req :extraInfoTables) quickserver-extra-info-tables-spec
   (ds/req :cpu_graph_data) string?
   (ds/req :bandwidth_xaxis) string?
   (ds/req :bandwidth_yaxis) string?
   (ds/req :module) string?
   (ds/req :token) string?
   (ds/req :service_disk_used) string?
   (ds/req :service_disk_total) string?
   (ds/req :disk_percentage) float?
   (ds/req :memory) string?
   (ds/req :hdd) string?
   (ds/req :service_overview_extra) (s/coll-of string?)
   })

(def quickserver-spec
  (ds/spec
    {:name ::quickserver
     :spec quickserver-data}))
