(ns inter-server-management-api.specs.vps-traffic-totals-section-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-traffic-totals-section-response-data
  {
   (ds/req :in) int?
   (ds/req :out) int?
   })

(def vps-traffic-totals-section-response-spec
  (ds/spec
    {:name ::vps-traffic-totals-section-response
     :spec vps-traffic-totals-section-response-data}))
