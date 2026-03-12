(ns inter-server-management-api.specs.get-website-buy-ip-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def get-website-buy-ip-200-response-data
  {
   (ds/opt :ips) (s/map-of string? string?)
   })

(def get-website-buy-ip-200-response-spec
  (ds/spec
    {:name ::get-website-buy-ip-200-response
     :spec get-website-buy-ip-200-response-data}))
