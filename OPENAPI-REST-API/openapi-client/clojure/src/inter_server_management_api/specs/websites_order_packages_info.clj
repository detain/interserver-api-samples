(ns inter-server-management-api.specs.websites-order-packages-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def websites-order-packages-info-data
  {
   (ds/req :services_id) string?
   (ds/req :services_name) string?
   (ds/req :services_cost) string?
   (ds/req :services_category) string?
   (ds/req :services_buyable) string?
   (ds/req :services_type) string?
   (ds/req :services_module) string?
   (ds/req :services_description) string?
   (ds/opt :services_field1) string?
   (ds/opt :services_field2) string?
   (ds/opt :services_html) string?
   (ds/opt :services_moreinfo_url) string?
   (ds/opt :services_hidden) string?
   })

(def websites-order-packages-info-spec
  (ds/spec
    {:name ::websites-order-packages-info
     :spec websites-order-packages-info-data}))
