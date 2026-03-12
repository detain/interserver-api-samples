(ns inter-server-management-api.specs.vps-traffic-usage-average-section-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-traffic-usage-average-section-response-data
  {
   (ds/req :total) int?
   (ds/req :count) int?
   (ds/req :value) int?
   })

(def vps-traffic-usage-average-section-response-spec
  (ds/spec
    {:name ::vps-traffic-usage-average-section-response
     :spec vps-traffic-usage-average-section-response-data}))
