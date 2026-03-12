(ns inter-server-management-api.specs.home-details-modules-webhosting
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def home-details-modules-webhosting-data
  {
   (ds/opt :icon) string?
   (ds/opt :view_link) string?
   (ds/opt :heading) string?
   (ds/opt :buy_link) string?
   (ds/opt :list_link) string?
   })

(def home-details-modules-webhosting-spec
  (ds/spec
    {:name ::home-details-modules-webhosting
     :spec home-details-modules-webhosting-data}))
