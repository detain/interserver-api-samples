(ns inter-server-management-api.specs.post-website-buy-ip-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def post-website-buy-ip-request-data
  {
   (ds/opt :ips) (s/map-of string? string?)
   })

(def post-website-buy-ip-request-spec
  (ds/spec
    {:name ::post-website-buy-ip-request
     :spec post-website-buy-ip-request-data}))
