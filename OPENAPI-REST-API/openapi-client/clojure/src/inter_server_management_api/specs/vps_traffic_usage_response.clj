(ns inter-server-management-api.specs.vps-traffic-usage-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-traffic-totals-section-response :refer :all]
            [inter-server-management-api.specs.vps-traffic-totals-section-response :refer :all]
            [inter-server-management-api.specs.vps-traffic-usage-average-response :refer :all]
            )
  (:import (java.io File)))


(def vps-traffic-usage-response-data
  {
   (ds/req :current) vps-traffic-totals-section-response-spec
   (ds/req :peak) vps-traffic-totals-section-response-spec
   (ds/req :average) vps-traffic-usage-average-response-spec
   })

(def vps-traffic-usage-response-spec
  (ds/spec
    {:name ::vps-traffic-usage-response
     :spec vps-traffic-usage-response-data}))
