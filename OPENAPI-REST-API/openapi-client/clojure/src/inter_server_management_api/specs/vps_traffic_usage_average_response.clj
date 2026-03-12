(ns inter-server-management-api.specs.vps-traffic-usage-average-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-traffic-usage-average-section-response :refer :all]
            [inter-server-management-api.specs.vps-traffic-usage-average-section-response :refer :all]
            )
  (:import (java.io File)))


(def vps-traffic-usage-average-response-data
  {
   (ds/req :in) vps-traffic-usage-average-section-response-spec
   (ds/req :out) vps-traffic-usage-average-section-response-spec
   })

(def vps-traffic-usage-average-response-spec
  (ds/spec
    {:name ::vps-traffic-usage-average-response
     :spec vps-traffic-usage-average-response-data}))
