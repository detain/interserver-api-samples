(ns inter-server-management-api.specs.home-details-modules-quickservers
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def home-details-modules-quickservers-data
  {
   (ds/opt :icon) string?
   (ds/opt :view_link) string?
   (ds/opt :heading) string?
   (ds/opt :buy_link) string?
   (ds/opt :list_link) string?
   })

(def home-details-modules-quickservers-spec
  (ds/spec
    {:name ::home-details-modules-quickservers
     :spec home-details-modules-quickservers-data}))
